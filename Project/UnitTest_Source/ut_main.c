/************************************************
 *  1. Included Files
 ***********************************************/
#include "ut_main.h"

/************************************************
 *  2. Global, Static and Extern Variables
 ***********************************************/
extern void (*testcaseList[9])(void);

/************************************************
 *  3. Function Defintition
 ***********************************************/
void setUp(void) {  
}

void tearDown(void) {
}

int runTest(void) {
	int i;
	int noTestcase = sizeof(testcaseList)/ sizeof(testcaseList[0]);
	
	UNITY_BEGIN();
	
	for(i = 0; i < noTestcase; i++) {
		RUN_TEST(testcaseList[i]);
	}
	

	return UNITY_END();
}
