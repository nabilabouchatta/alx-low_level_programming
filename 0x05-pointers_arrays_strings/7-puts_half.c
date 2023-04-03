#include "main.h"


/**
 *puts_half-prints half of a string,
 *@str:string
 *Return :void
 */

void puts_half(char *str)
{
	int i, n;

	i = 0;
	while (str[i])
		i++;
	i++;
	if (i % 2 == 1)
		n = (i - 1) / 2;
	else
		n = i / 2;
	while (str[n])
	{
		putchar(str[n]);
		n++;
	}
	putchar('\n');
}
