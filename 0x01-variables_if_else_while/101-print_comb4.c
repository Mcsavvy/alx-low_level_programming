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
	int cur1, cur2;

	/* as long as we are not at the last digit */
	while (start < end)
	{
		/**
		 * current should be next digit after the starting point
		 * this is because we do not want to combine the same number
		 * e.g when you're starting from five, current should be 6.
		 * i.e 56
		 */
		cur1 = start + 1;
		while (cur1 <= end)
		{
			cur2 = cur1 + 1;
			while (cur2 <= end)
			{
				putchar(start);
				putchar(cur1);
				putchar(cur2);
				/**
				 * before you insert a comma and an additional space,
				 * confirm this is not the last combination
				 */
				if (!(start == end - 2 && cur1 == end - 1 && cur2 == end))
				{
					putchar(44);
					putchar(32);
				}
				cur2++;
			}
			cur1++;
		}
		start++;
	}
	putchar(10);
	return (0);
}
