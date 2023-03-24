#include "main.h"

/**
 *print_square(int size)-prints a square
 *@size : the size of the square
 *Return : void
 */

void print_square(int size)
{
int i, j;
if (size > 0)
{
for (i = 1; i < size + 1; i++)
{
j = 1;
while (j <= size)
{
putchar (35);
j++;
}
putchar ('\n');
}
}
putchar ('\n');
}
