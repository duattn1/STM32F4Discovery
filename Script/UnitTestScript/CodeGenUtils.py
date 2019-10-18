################################################################################
# 1. Including files
################################################################################
from CodeGen import *
import shutil               # This module is for file copying

################################################################################
# 2. Class definition
################################################################################

################################################################################
# 3. Function definition
################################################################################
def gen_comment_line(fileType, comment):
    content = "// " + comment
    if "SourceFile" == fileType:
        sourceFile(content)
    if "HeaderFile" == fileType:
        headerFile(content)

def gen_comment_block(fileType, section_name):
    content = " * " + section_name
    if "SourceFile" == fileType:
        sourceFile("/*******************************************************************************")
        sourceFile(content)
        sourceFile(" ******************************************************************************/")
    if "HeaderFile" == fileType:
        headerFile("/*******************************************************************************")
        headerFile(content)
        headerFile(" ******************************************************************************/")

def gen_var_declaration(fileType, var_type, var_name):
    content = var_type + " " + var_name + ";" 
    if "SourceFile" == fileType:
        sourceFile(content)
    if "HeaderFile" == fileType:
        headerFile(content)

def gen_var_definition(fileType, var_type, var_name, init_value):
    content = var_type + " " + var_name + " = " + init_value + ";" 
    if "SourceFile" == fileType:
        sourceFile(content)
    if "HeaderFile" == fileType:
        headerFile(content)

def gen_var_assignment(fileType, var_name, assign_operator, value):
    content = var_name + " " + assign_operator + " " + value + ";"
    if "SourceFile" == fileType:
        sourceFile(content)
    if "HeaderFile" == fileType:
        headerFile(content)

def gen_function_call_no_arg(fileType, func_name):
    content = func_name + "();"
    if "SourceFile" == fileType:
        sourceFile(content)
    if "HeaderFile" == fileType:
        headerFile(content)
    
def gen_function_call_with_arg(fileType, func_name, params):   
    content = func_name + "("
    first = True
    for param in params:
        if first:
            first = False
            content += param
        else:
            content += ", " + param
    content += ");"
    if "SourceFile" == fileType:
        sourceFile(content)
    if "HeaderFile" == fileType:
        headerFile(content)

def gen_break_line(fileType):
    content = ""
    if "SourceFile" == fileType:
        sourceFile(content)
    if "HeaderFile" == fileType:
        headerFile(content)

################################################################################
# NOTES: Currently,  Bblow block of code is not used. Consider to use in future
################################################################################
# Source path and Destination path
source = "C:\\Users\\PC\\Documents\\GitHub\\STM32F4Discovery\\Project\\Source\\source_template.txt"  
destination = "C:\\Users\\PC\\Documents\\GitHub\\STM32F4Discovery\\Script\\UnitTestScript\\ut_gpio_driver.c"
  
# Do the copying
#dest = shutil.copyfile(source, destination) 
 
section_0_line_index = 0
section_1_line_index = 0
section_2_line_index = 0
section_3_line_index = 0
section_4_line_index = 0
section_5_line_index = 0
section_6_line_index = 0

f = open("ut_gpio_driver.c", "r")

lines = f.readlines()
line_offset = []
offset = 0

# Call strip() to trim beginning and ending whitespaces
lineIndex = 0
for line in lines:
    if "/** @file TODO: MODULE.c" == line.strip():
       section_0_line_index = lineIndex 
    if "* 1. Included Files" == line.strip():
       section_1_line_index = lineIndex
    if "* 2. Object-like Macros" == line.strip():
       section_2_line_index = lineIndex 
    if "* 3. Function-like Macros" == line.strip():
       section_3_line_index = lineIndex 
    if "* 4. Typedefs: Enumerations, Structures, Pointers, Others" == line.strip():
       section_4_line_index = lineIndex 
    if "* 5. Global, Static and Extern Variables" == line.strip():
       section_5_line_index = lineIndex 
    if "* 6. Function Definitions" == line.strip():
       section_6_line_index = lineIndex
       
    lineIndex += 1
    line_offset.append(offset)
    offset += len(line) + 1 # Add 1 for \r\n character
    
f.close() 
 
############################################################################### 
# Create the generated file
headerFile = CppFile("ut_gpio_driver.h")
sourceFile = CppFile("ut_gpio_driver.c")
