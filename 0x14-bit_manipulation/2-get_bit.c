#include "main.h"

/**
 *  get_bit--returns the value of a bit at a given index.
 * @n: the bit
 * @index: the index
 *
 *Return: the value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int result;

	if (index > 64)
		return (-1);
	resutl = n >> index;

	return (result & 1);
}
