#inlclude "3-clac.h"

/**
 * op_add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: la somme de a et b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the differece of tow integers
 * @a: first integer
 * @b: second integer
 *
 * Return:the  difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - claculates the product of two integers
 * @a:first integer
 * @b: the second integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - claculates the dividion of two integers
 * @a : number one
 * @b: number two
 *
 * Return: resutlt of the dividion of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - claculates the remainder of the dividion of two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
