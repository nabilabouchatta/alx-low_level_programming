#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: represents the number of command-line arguments.
 * @argv:  It is an array of strings that represents
 * the command-line arguments passed to the program.
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int Sum = 0, number, a, b;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	a = 1;
	while (a < argc)
	{
		b = 0;
		while (argv[a][b])
		{
			if (!(isdigit(argv[a][b])))
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		number = atoi(argv[a]);
		Sum += number;
		a++;
	}
	printf("%d\n", Sum);
	return (0);
}
