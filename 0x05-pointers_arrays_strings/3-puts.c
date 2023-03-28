#include "main.h"


/**
 *_puts-prints a string
 *
 *@str : pointer
 *Return : void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
