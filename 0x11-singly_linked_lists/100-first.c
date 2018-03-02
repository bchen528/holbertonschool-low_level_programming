#include "lists.h"

void startUpFunc(void) __attribute__ ((constructor));

/**
 * startUpFunc - prints statement before main
 */

void startUpFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
