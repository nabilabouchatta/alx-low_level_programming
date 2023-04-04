#include "main.h"
/**
 * print_chessboard - prints the shessboard
 * @a: the 2 demontions array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			putchar(a[i][j]);
			j++;
		}
		putchar('\n');
		j = 0;
		i++;
	}
}
