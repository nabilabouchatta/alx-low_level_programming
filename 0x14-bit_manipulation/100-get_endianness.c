#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big-endian. -1 if litte-endian
 */
int get_endianness(void)
{
	int n = 1;
	char *endian = (char *)&n;

	if (*endian == 1)
		return (1);

	return (0);
}
