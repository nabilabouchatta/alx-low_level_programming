#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reverse
 * @s: the string who will be reversed
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\n')
		return;
	_print_rev_recursion(s + 1);
	putchar(*s);
}
