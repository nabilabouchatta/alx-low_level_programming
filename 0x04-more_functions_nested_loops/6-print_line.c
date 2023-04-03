#include <stdio.h>

/**
 *print_line-draws a straight line in the terminal.
 *@n : character
 *Return :void
 */

void print_line(int n)
{

int i;

for (i = 1; i <= n; i++)
{
putchar ('_');
}
putchar ('\n');
}
