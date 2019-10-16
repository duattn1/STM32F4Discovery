################################################################################
# 1. Including files
################################################################################
from CodeGenUtils import *
from XlsProcessing import *

################################################################################
# 2. Class definition
################################################################################

################################################################################
# 3. Function definition
################################################################################
def init_global_var(testcase):
    for var in testcase.global_vars:
        gen_comment_line("Declare object to check value of " + var.actual_mem)
        gen_var_declaration("Uint32Data_Typedef", var.gen_name)
    gen_break_line()

def init_param(testcase):
    for param in testcase.params:
        gen_comment_line("Init " + param.gen_name)
        if param.isStructType == "False":
            gen_var_definition(param.type, param.param_name, param.init_value)
        else:
            gen_var_declaration(param.type, param.param_name)
            # Split the structure init contents into lines and store in an array
            struct_member_init = param.init_value.split("\n") 
            for statement in struct_member_init:
                cpp(param.param_name + "." + statement + ";")
    gen_break_line()

def call_test_method(testcase):
    # Create an array with null items ("None" is similar to null")
    param_list = [None] * len(testcase.params)
    
    # Get list of parameters from "testcase" class
    i = 0;
    for param in testcase.params:
        param_list[i] = param.param_name
        i += 1

    gen_comment_line("Call the tested function")
    params_count = len(param_list)
    if params_count > 0:
        gen_function_call_with_arg(testcase.function_name, param_list)
    else:
        gen_function_call_no_arg(testcase.function_name)
    gen_break_line()

def compare_one_register(global_var):
    global_var_name = global_var.gen_name

    # define temporary array to pass to gen_function_call_with_arg()
    temp_global_var = [global_var_name]

    gen_comment_line("Compare " + global_var_name + " with expected value")
    
    # Contents of global_var_n.actual
    actual_content = global_var_name + ".actual = "
    actual_content += global_var.actual_mem
    actual_content += ";"
    # Contents of global_var_n.expected
    expected_content = global_var_name + ".expected = "
    expected_content += global_var.expected
    expected_content += ";"
    # Contents of global_var_n.mask
    mask_content = global_var_name + ".mask = "
    mask_content += global_var.mask
    mask_content += ";"
    
    cpp(actual_content)
    cpp(expected_content)
    cpp(mask_content)
    
    gen_function_call_with_arg("compareBits", temp_global_var)  

def compare(testcase):
    for var in testcase.global_vars:
        compare_one_register(var)

def gen_section_0_header_comment_block():
    cpp("/** @file ut_gpio_driver.c") 
    cpp(" *  @brief Function implementation for unit test of GPIO driver.")
    cpp(" *")
    cpp(" *  This file is generated from scripts. This is the source file for ")
    cpp(" *  the unit test definition of GPIO driver.")
    cpp(" *")
    cpp(" *  @author 	Tran Nhat Duat (duattn)")
    cpp(" *  @version 	V1.0")
    cpp(" */")
    gen_break_line()

def gen_section_1_include_file():
    gen_comment_block("1. Included Files") 
    cpp("#include \"ut_gpio_driver.h\"")
    gen_break_line()
    
def gen_section_2_object_macro():
    gen_comment_block("2. Object-like Macros") 
    gen_break_line()
    
def gen_section_3_function_macro():
    gen_comment_block("3. Function-like Macros") 
    gen_break_line()
    
def gen_section_4_typedef():
    gen_comment_block("4. Typedefs: Enumerations, Structures, Pointers, Others") 
    gen_break_line()

def gen_section_5_variable():
    gen_comment_block("5. Global, Static and Extern Variables")
    noTestcase = len(testSuite.testcases)
    gen_comment_line("List of all test cases")
    with cpp.block("void (*testcaseList[" + str(noTestcase) + \
    "])(void) = ", ";"):
        counter = 1
        for testcase in testSuite.testcases:
            if counter < noTestcase:
                cpp(testcase.testcase_name + ",")           
            else:
                cpp(testcase.testcase_name)
            counter += 1
    gen_break_line()

def gen_section_6_function_definition():
    gen_comment_block("6. Function Definitions")
    # Generate blocks of testcases
    for testcase in testSuite.testcases:
        testcase_prototype = "void " + testcase.testcase_name + "(void)"
        with cpp.block(testcase_prototype):
            init_global_var(testcase)    
            init_param(testcase)    
            call_test_method(testcase)    
            compare(testcase)      
        gen_break_line()
    
    
################################################################################
# 4. Main processing: File generating
################################################################################
gen_section_0_header_comment_block()
gen_section_1_include_file()
gen_section_2_object_macro()
gen_section_3_function_macro()
gen_section_4_typedef()
gen_section_5_variable()
gen_section_6_function_definition()

# Close the generated file
cpp.close()