#include "varaidic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: parameter
 *
 * Return:  the sum of all its parameters, but n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list yep;
	unsigned int i;
	int sum = 0;

	if (i == 0)
	{
		return (0);
	}
	va_start(yep, n);

	for (i = 0; i < n; i++)
		sum += va_arg(yep, int);
	va_end(valist);
	return (sum);
}
