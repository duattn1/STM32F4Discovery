################################################################################
# 1. Including files
################################################################################
from CodeGen import *

################################################################################
# 2. Class definition
################################################################################

################################################################################
# 3. Function definition
################################################################################
def gen_comment_line(comment):
    content = "// " + comment
    cpp(content)

def gen_comment_block(section_name):
    content = " * " + section_name
    cpp("/*******************************************************************************")
    cpp(content)
    cpp(" ******************************************************************************/")

def gen_var_declaration(var_type, var_name):
    content = var_type + " " + var_name + ";" 
    cpp(content)

def gen_var_definition(var_type, var_name, init_value):
    content = var_type + " " + var_name + " = " + init_value + ";" 
    cpp(content)

def gen_var_assignment(var_name, assign_operator, value):
    content = var_name + " " + assign_operator + " " + value + ";"
    cpp(content)

def gen_function_call_no_arg(func_name):
    content = func_name + "();"
    cpp(content)
    
def gen_function_call_with_arg(func_name, params):   
    content = func_name + "("
    first = True
    for param in params:
        if first:
            first = False
            content += param
        else:
            content += ", " + param
    content += ");"
    cpp(content)

def gen_break_line():
    cpp(""); 
 
# Create the generated file
cpp = CppFile("ut_gpio_driver.c")
