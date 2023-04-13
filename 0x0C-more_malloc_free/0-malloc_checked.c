#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory.
 * @b:argument
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *n;
		n = malloc(b);
	if (!n)
	{
		exit(98);
	}
	return (n);
}
