#include "main.h"

/**
 *print_diagonal-draws a diagonal line on the terminal.
 *@n:the number of times the character \ should be printed
 *Return : void
 */

void print_diagonal(int n)
{

int a = 0;
int b = 0;

	if (n > 0)
	{
		while (a < n)
		{
			b = a;
			while (b)
			{
				_putchar(' ');
				b--;
			}
			_putchar('\\');
			_putchar('\n');
			a++;
		}
	}
	else
		_putchar('\n');
}
