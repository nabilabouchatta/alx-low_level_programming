#include <stdio.h>

/**
 *print_most_numbers-prints the numbers, from 0 to 9, followed by a new line.
 *Return : void
 */

void print_most_numbers(void)
{
int i;
i = 0;

while (i < 10)
{
if (i == 2 || i == 4)
{
	i++;
	continue;
}
putchar (i + 48);
i++;
}
putchar ('\n');
}
