#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: represents the number of command-line arguments.
 * @argv:  It is an array of strings that represents
 * the command-line arguments passed to the program.
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int R, N1, N2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		N1 = atoi(argv[1]);
		N2 = atoi(argv[2]);
		R = N1 * N2;
		printf("%d\n", R);
	}
	return (0);
}
