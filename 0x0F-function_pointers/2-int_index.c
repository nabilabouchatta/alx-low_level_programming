#include "function_pointers.h"

/**
 * int_index - earches for an integer
 * @array: array to search in
 * @size: the size of the array
 * @cmp: function  pointer
 *
 * Return: the index of the first element for
 * which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array && cmp)
	{
		n = 0;
		while (n < size)
		{
			if (cmp(array[n]) != 0)
					return (n);
			n++;
			}
	}
	return (-1);
}
