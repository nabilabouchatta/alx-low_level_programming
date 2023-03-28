#include "main.h"

/**
 *rev_string-reverses a string.
 *@s:pointer
 *
 */

void rev_string(char *s)
{
	int i, j, length;
	char swap;
	
	i = 0;
	j = 0;
	while (s[i])
		i++;
	length = i - 1;
	while (j < i / 2)
	{
		swap = s[j];
		s[j] = s[length];
		s[length] = swap;
		length--;
		j++;
	}
}
