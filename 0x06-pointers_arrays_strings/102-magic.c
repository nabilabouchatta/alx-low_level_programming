#include <stdio.h>
/**
 * main - main
 *
 * Return :0 always succsses
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * writ your line of code here...
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 * - only one statement
	 * - you are not allowed to code anything else then  this line of code
	 */
	p[5] = 98;
	/* ...so the this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
