#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with char c.
 * @size: the size of the memory to allocate.
 * @c: the char to intialize the array with.
 * Return: the array created.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *chaar;

	if (size == 0)
	{
		return (NULL);
	}
	chaar = malloc(sizeof(char) * size);
	if (chaar == NULL)
		return (NULL);
	n = 0;
	while (n < size)
	{
		chaar[n] = c;
		n++;
	}
	return (chaar);
}
