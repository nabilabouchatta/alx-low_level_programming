#include "main.h"

/**
 *more_numbers-prints 10 times the numbers, from 0 to 14.
 *
 *Return : void
 *
 */

void more_numbers(void)
{
int a, b;
for (a = 0; a < 10; a++)
{
b = 0;
while (b < 15)

{
if (b > 9)
{
putchar ((b / 10) + '0');
}
putchar ((b % 10) + '0');
b++;
}
putchar ('\n');
}
}
