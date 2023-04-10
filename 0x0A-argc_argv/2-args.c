#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: represents the number of command-line arguments.
 * @argv:  It is an array of strings that represents
 * the command-line arguments passed to the program.
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int n = 0;

	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
