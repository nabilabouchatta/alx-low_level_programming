#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each elment of array
 * @array: the array to iterat over
 * @size: the size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;

	if (!array || !action)
		return;
	n = 0;
	while (n < size)
	{
		action(array[n]);
		n++;
	}
}
