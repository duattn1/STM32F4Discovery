################################################################################
# Including files
################################################################################
import xlrd


################################################################################
# Class definition
################################################################################
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
    def __init__(self, gen_name, type, expected, actual_mem, mask):
        self.gen_name = gen_name
        self.type = type
        self.expected = expected
        self.actual_mem = actual_mem
        self.mask = mask

class paramCollection:
    def __init__(self, gen_name, type, param_name, init_value, isStructType):
        self.gen_name = gen_name
        self.type = type
        self.param_name = param_name
        self.init_value = init_value
        self.isStructType = isStructType
########################################################
loc = ("C:\\Users\\PC\\Documents\\Python_Workspace\\testcase.xls") 
# To open Workbook 
wb = xlrd.open_workbook(loc) 
sheet = wb.sheet_by_index(0) 
  
# For row 0 and column 0 
value = sheet.cell_value(0, 0) 
#print(value)
##################################################

# parameter collections
param_1 = paramCollection("param_1", "GPIO_TypeDef*", "gpioX", "GPIOA", "False")
param_2 = paramCollection("param_2", "GPIO_TypeDef*", "gpioY", "GPIOD", "False")

# global variable collections
global_var_1 = globalVarCollection("global_var_1", "uint32_t", "0x00000001", "RCC->AHB1ENR", "0x00000001")
global_var_2 = globalVarCollection("global_var_2", "uint32_t", "0x00000008", "RCC->DUAT", "0x00000008")

# testcase collection
# testcase 1
testcase_1 = testcaseCollection("GPIO_Enable", "Test_GPIO_Enable_TC1")
testcase_1.params = [param_1, param_2]
testcase_1.global_vars = [global_var_1, global_var_2]
# testcase 2
testcase_2 = testcaseCollection("GPIO_Enable", "Test_GPIO_Enable_TC2")
testcase_2.params = [param_1, param_2]
testcase_2.global_vars = [global_var_1, global_var_2]

#test suite
testSuite = testSuiteCollection("ut_gpio_driver")
testSuite.testcases = [testcase_1, testcase_2]

##############################################
