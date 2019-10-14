#include "sample_switch.h"

#ifdef UNIT_TEST_RUNNING
#include "ut_main.h"

struct __FILE
{
  int handle;
  /* Whatever you require here. If the only file you are using is */
  /* standard output using printf() for debugging, no file handling */
  /* is required. */
};

/*send text over SWV*/
int fputc(int ch, FILE *f) {
    ITM_SendChar(ch);//send method for SWV
    return(ch);
}
#endif

int main(void) {
	//demo();
	return runTest();
}
