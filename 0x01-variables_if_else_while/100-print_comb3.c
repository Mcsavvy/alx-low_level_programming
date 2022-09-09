#include <stdio.h>

/**
 * main - Entry Point
 *
 * this program prints all possible different
 * combination of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int start = 48; /* 0 */
	int end = 57; /* 9 */
	int current;

	/* as long as we are not at the last digit */
	while (start < end)
	{
		/**
		 * current should be next digit after the starting point
		 * this is because we do not want to combine the same number
		 * e.g when you're starting from five, current should be 6.
		 * i.e 56
		 */
		current = start + 1;
		while (current <= end)
		{
			putchar(start);
			putchar(current);
			/**
			 * before you insert a comma and an additional space,
			 * confirm this is not the last combination
			 */
			if (!(start == end - 1 && current == end))
			{
				putchar(44);
				putchar(32);
			}
			current++;
		}
		start++;
	}
	putchar(10);
	return (0);
}
