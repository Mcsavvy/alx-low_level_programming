#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * this program prints the minimun numbers
 * of coins to make change for an amount of money *
 *
 * @argc: number of cli arguments
 * @argv: list of cli arguments
 *
 * Return: 1 if number of arguments passed is not 1, else 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int numOfCoins = 0;
	int coins[5] = {25, 10, 5, 2, 1};
	int i; /* coins index */

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (i = 0; cents && i < 5; i++)
		while (cents && !(cents - coins[i] < 0))
		{
			cents -= coins[i];
			numOfCoins++;
		}
	printf("%d\n", numOfCoins);
	return (0);
}
