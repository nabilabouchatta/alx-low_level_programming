#include <stdio.h>
/**
 * main - prints all numbers of base 16 in lowercase.
 *
 * Return: 0
*/
int main(void)
{
	int i = 0, j = 1;

	while (i < 100)
	{
	while (j < 100)
	{
		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(j / 10 + '0');
		putchar(j % 10 + '0');
		if (i != 98 || j != 99)
	{
		putchar(',');
		putchar(' ');
	}
		j++;
	}
		i++;
		j = i + 1;
	}
		return (0);
}
