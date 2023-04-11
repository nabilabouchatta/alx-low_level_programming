#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: the size of the array to allocate
 * @c: char to initialise array
 * Return : pointer of array
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
	while (i < size)
	{
		chaar[n] = c;
		n++;
	}
	return (chaar);
}
