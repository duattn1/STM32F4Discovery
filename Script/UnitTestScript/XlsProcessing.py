################################################################################
# 1. Including files
################################################################################
import xlrd

################################################################################
# 2. Class definition
################################################################################
class testSuiteCollection:
    test_suite_name = ""
    testcases = []
    
    def __init__(self, test_suite_name):
        self.test_suite_name = str(test_suite_name)

class testcaseCollection:
    function_name = ""
    testcase_name = ""
    params = []
    global_vars = []
    
    def __init__(self, function_name, testcase_name):
        self.function_name = str(function_name)
        self.testcase_name = str(testcase_name)

class globalVarCollection:
    gen_name = ""
    type = ""
    expected = ""
    actual_mem = ""
    mask = ""
    def __init__(self, gen_name, type, expected, actual_mem, mask):
        self.gen_name = str(gen_name)
        self.type = str(type)
        self.expected = str(expected)
        self.actual_mem = str(actual_mem)
        self.mask = str(mask)
        
class paramCollection:
    gen_name = ""
    type = ""
    param_name = ""
    init_value = ""
    isStructType = "False"
    def __init__(self, gen_name, type, param_name, init_value, isStructType):
        self.gen_name = str(gen_name)
        self.type = str(type)
        self.param_name = str(param_name)
        self.init_value = str(init_value)
        self.isStructType = str(isStructType)

################################################################################
# 3. Function definition
################################################################################
def find_output_position():
    output_position = 1 # assume that there is no INPUT data, and OUTPUT data begins at column 1
    for i in range(sheet.ncols):
        if "Output" == sheet.cell_value(2, i):
            output_position = i
    return output_position

def isStructure(type):
    result = "True"

    # check if "type" exists in "basicTypes"
    try:
        #basicTypes.index(type)
        type.index("Struct_")
    except ValueError:
        result = "False"
    
    # check if "type" is a pointer
    #if result == "True":        
    #    try:
    #        type.index("*")
    #    except ValueError:
    #        result = "True"
    #    else:
    #        result = "False"
            
    return result
    
################################################################################
# 4. Main processing: XLS file parsing
################################################################################
loc = ("C:\\Users\\PC\\Documents\\GitHub\\STM32F4Discovery\\UT_TestSuite.xls") 
# Open Workbook 
wb = xlrd.open_workbook(loc) 
sheet = wb.sheet_by_index(2)

basicTypes = ["int8_t", "int16_t", "int32_t", "int64_t", \
"uint8_t", "uint16_t", "uint32_t", "uint64_t"]
###############################
output_position = find_output_position()
noRows = sheet.nrows
noCols = sheet.ncols

testSuite = testSuiteCollection("ut_gpio_driver")
func_name = sheet.cell_value(0, 1)

for i in range(5, noRows):
    testcase_name = sheet.cell_value(i, 0)
    noParams = (output_position - 1) // 2 # division with result of integer number
    noGlobalVars = (noCols - output_position) // 2 # division with result of integer number
    
    
    testcase = testcaseCollection(func_name, testcase_name)
    testcase.params = [None]*noParams
    testcase.global_vars = [None]*noGlobalVars
    
    # Collect all parameters
    index = 0
    for j in range(1, output_position, 2): 
        gen_name = "param_" + str(index + 1)
        type = sheet.cell_value(4, j) # unchanged
        param_name = sheet.cell_value(3, j) # unchanged
        init_value = sheet.cell_value(i, j)        
        isStructType = isStructure(type)
        testcase.params[index] = \
        paramCollection(gen_name, type, param_name, init_value, isStructType)
        
        index += 1
        
        
    # Collect all global variables
    index = 0
    for j in range(output_position, noCols - 1, 2): 
        gen_name = "global_var_" + str(index + 1)
        type = sheet.cell_value(4, j) # unchanged
        expected = sheet.cell_value(i, j)
        actual_mem = sheet.cell_value(3, j) # unchanged
        mask = sheet.cell_value(i, j + 1)
        testcase.global_vars[index] = \
        globalVarCollection(gen_name, type, expected, actual_mem, mask)
        
        index += 1
    
    testSuite.testcases.append(testcase)