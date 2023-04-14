#include "main.h"
#include <stdlib.h>

/**
 *array_range -  creates an array of integers.
 *@min: the minimum integer
 *@max: the maximum integer
 *Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array, i = 0, m = min;

	if (max < min)
		return (0);
	array = malloc((max - min + 1) * sizeof(int));

	if (!array)
		return (0);
	while (i <= max - min)
		array[i++] = m++;
	return (array);
}
