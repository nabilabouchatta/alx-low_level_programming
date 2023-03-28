#include "main.h"

/**
 *rev_string-reverses a string.
 *@s:pointer
 *
 */

void rev_string(char *s)
{
	int i, length;
	char swap;

	length = 0;
	while (s[length])
	{
		length++;
	}

	for (i = 0; i <= length / 2; i++)
	{
		swap = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = swap;
	}
}
