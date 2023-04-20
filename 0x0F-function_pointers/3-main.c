#include "3-calc.h"

/**
 * main -perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int arg_1, arg_2, result;
	char c;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	arg_1 = atoi(argv[1]);
	arg_2 = atoi(argc[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];

	if ((c == '/' || c == '%') && arg_2 == 0)
	{
		printf("Eroor\n");
		exit(100);
	}
	result = func(arg_1, arg_2);

	printf("%d\n", result);
	return (0);
}
