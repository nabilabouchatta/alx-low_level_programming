#include "main.h"

/**
 *  flip_bits--  returns the number of bits you would
 *  need to flip to get from one number to another.
 * @n: the number
 * @m: the number to flip n to
 *
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int flip = n ^ m, i = 0;

while (flip > 0)
{
i += (flip & 1);
flip >>= 1;
}
return (i);
}
