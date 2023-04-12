#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  concatenates two strings.
 * @s1: stirng one.
 * @s2: string two.
 *
 * Return: pointer of an array.
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	unsigned int a, b, n, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	string = malloc(sizeof(char) * (a + b + 1));

	if (string == NULL)
	{
		free(string);
		return (NULL);
	}
	n = 0;
	while (n < a)
	{
		string[n] = s1[n];
		n++;
	}
	limit = b;
	b = 0;
	while (b <= limit)
	{
		string[n] = s2[b];
		n++;
		b++;
	}
	return (string);
}
