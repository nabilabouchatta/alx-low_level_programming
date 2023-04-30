#include "main.h"

/**
 * rot13- rotate by 13 places 'Caesar Cipher'
 * @s: string.
 * Return: the conveted string
 */

char *rot13(char *s)
{
	int i, j;
	char *array1 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *array2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";


	i = 0;

	while (s[i])
	{
		j = 0;
		while (array2[j])
		{
			if (array2[j] == s[i])
			{
				s[i] = array1[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
