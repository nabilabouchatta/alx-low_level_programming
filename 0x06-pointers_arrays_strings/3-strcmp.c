#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1:string one
 * @s2: string two.
 * Return: if s1 ans s2 are equals return 0,
 * if not then return another number.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, oper = 0;

	while (oper == 0)
	{
		if ((*(s1 + 1) == '\0') && (*(s2 + i) == `\0'))
			break;
		oper = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (oper);
}
