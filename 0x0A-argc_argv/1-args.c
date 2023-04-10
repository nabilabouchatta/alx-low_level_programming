#include <stdio.h>
/**
 * main - prints the number of argc
 * @argc: represents the number of command-line arguments.
 * @argv:  It is an array of strings that represents
 * the command-line arguments passed to the program.
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
