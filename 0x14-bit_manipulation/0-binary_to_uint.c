#include "main.h"

/**
 * binary_to_uint -- converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
int length;
unsigned int n;

n = 0;
if (b == NULL)
return (0);
for (length = 0; b[length] != '\0'; length++)
{
if (b[length] != '0' && b[length] != '1')
return (0);
n = (n << 1) + (b[length] - '0');
}
return (n);
}}
