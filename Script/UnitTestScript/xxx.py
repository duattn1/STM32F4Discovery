import xlrd

#################################
loc = ("C:\\Users\\PC\\Documents\\GitHub\\STM32F4Discovery\\UT_TestSuite.xls") 
# To open Workbook 
wb = xlrd.open_workbook(loc) 
sheet = wb.sheet_by_index(2)

#########################################
#for i in range(sheet.ncols): 
#    print(sheet.cell_value(5, i))
#print(sheet.row_values(3))
#########################################

class testSuiteCollection:
    test_suite_name = ""
    testcases = []
    
    def __init__(self, test_suite_name):
        self.test_suite_name = test_suite_name

class testcaseCollection:
    function_name = ""
    testcase_name = ""
    params = []
    global_vars = []
    
    def __init__(self, function_name, testcase_name):
        self.function_name = function_name
        self.testcase_name = testcase_name

class globalVarCollection:
    gen_name = ""
    type = ""
    expected = ""
    actual_mem = ""
    mask = ""
    def __init__(self, gen_name, type, expected, actual_mem, mask):
        self.gen_name = gen_name
        self.type = type
        self.expected = expected
        self.actual_mem = actual_mem
        self.mask = mask
        
class paramCollection:
    gen_name = ""
    type = ""
    param_name = ""
    init_value = ""
    isStructType = "False"
    def __init__(self, gen_name, type, param_name, init_value, isStructType):
        self.gen_name = gen_name
        self.type = type
        self.param_name = param_name
        self.init_value = init_value
        self.isStructType = isStructType

def find_output_position():
    output_position = 1 # assume that there is no INPUT data, and OUTPUT data begins at column 1
    for i in range(sheet.ncols):
        if "Output" == sheet.cell_value(2, i):
            output_position = i
    return output_position

def isStructure(type):
    result = "False"
    try:
        basicTypes.index(type)
    except ValueError:
        result = "True"
    return result
###############
basicTypes = ["uint8_t", "uint16_t", "uint32_t", "uint64_t"]
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
        type = sheet.cell_value(4, j) # unchanged
        param_name = sheet.cell_value(3, j) # unchanged
        init_value = sheet.cell_value(i, j)        
        isStructType = isStructure(type)
        testcase.params[index] = paramCollection("param_1", type, param_name, init_value, isStructType)
        
        index += 1
        
        
    # Collect all global variables
    index = 0
    for j in range(output_position, noCols - 1, 2): 
        type = sheet.cell_value(4, j) # unchanged
        expected = sheet.cell_value(i, j)
        actual_mem = sheet.cell_value(3, j) # unchanged
        mask = sheet.cell_value(i, j + 1)
        testcase.global_vars[index] = globalVarCollection("param_1", type, expected, actual_mem, mask)
        
        index += 1
    
    testSuite.testcases.append(testcase)
    

# test methods
for i in range(0, sheet.nrows - 5):    
    print(testSuite.testcases[i].testcase_name)
    print(testSuite.testcases[i].params[0].isStructType)
    print(len(testSuite.testcases[i].params))
    print("")
