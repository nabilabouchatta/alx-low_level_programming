#include "main.h"
/**
 * _islower - check is the character is lowercase
 * @c :character checker
 * Retun : 0 if lowercase :1 somthing else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
