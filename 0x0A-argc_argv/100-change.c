#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: represents the number of command-line arguments.
 * @argv:  It is an array of strings that represents
 * the command-line arguments passed to the program.
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (0);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins = count_coins(cents);

	printf("%d\n", coins);

	return (0);
}

/**
 * count_coins - Count the minimum number of coin to make
 * change for a given coin value
 *
 * @cents: The amount of money
 *
 * Return: The minimum number of coins needed
*/
int count_coins(int cents)
{
	int coins = 0;

	coins += cents / 25;
	cents %= 25;

	coins += cents / 10;
	cents %= 10;

	coins += cents / 5;
	cents %= 5;

	coins += cents / 2;
	cents %= 2;

	coins += cents;

	return (coins);
}
