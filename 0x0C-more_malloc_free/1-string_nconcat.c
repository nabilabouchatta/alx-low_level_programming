#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: number
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int taille_1 = 0, taille_2 = 0, i;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	while (s1[taille_1] != '\0')
	{
		taille_1++;
	}

	while (s2[taille_2] != '\0')
	{
		taille_2++;
	}

	if (n > taille_2)
		n = taille_2;
	ptr = malloc((taille_1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (0);
	i = 0;
	while (i < taille_1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < (taille_1 + n))
	{
		ptr[i] = s2[i - taille_1];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
