#include <stdio.h>

/**
 * myStartupFun - apply constructor so it may be executed before main()
 */

void mySartupFun(void) __attribute__ ((constructor));

/** 
 * myStartupFun - implement myStartupFun
 */

void myStartupFun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
