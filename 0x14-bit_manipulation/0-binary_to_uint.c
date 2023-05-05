#include "main.h"

/**
 * binary_to_uint - converts a binary number to
 * an unsigned int.
 * @b:  pointing to a string of 0 and 1 chars
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result;

	result = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result =  (result << 1) + (b[i] - '0');
	}
	return (result);
}
