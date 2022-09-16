#include <stdio.h>

/**
 * main - Prints out from 1 to 100, followed by a new line.
 * But for multiples of 3, print `Fizz`
 * For multiples of 5 print `Buzz`
 * For multiples of both, print `FizzBuzz`
 *
 * Return: Always(0);
 */
int main(void)
{
	const int MAX = 100;
	int counter;

	for (counter = 1; counter <= MAX; counter++)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
			printf("FizzBuzz");
		else if (counter % 3 == 0)
			printf("Fizz");
		else if (counter % 5 == 0)
			printf("Buzz");
		else
			printf("%d", counter);
		if (counter != MAX)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
