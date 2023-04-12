#include "main.h"
#include <stdlib.h>

/**
 * _strdup- function returns a pointer to a new string
 * which is a duplicate of the string str.
 * @str: the string
 * Return: pointer of an array
 */
char *_strdup(char *str)
{
	char *string;
	unsigned int m, n;

	if (str == NULL)
		return (NULL);
	for (m = 0; str[m] != '\0'; m++)
		;
	string = (char *)malloc(sizeof(char) * (m + 1));

	if (string == NULL)
		return (NULL);

	n = 0;
	while (n <= m)
	{
		string[n] = str[n];
		n++;
	}
	return (string);
}
