#include "main.h"

/**
 * more_numbers - prints out numbers from 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int counter;
	int x; /* times (loop control) */
	int f; /* first digit of a number e.g [1]2 */
	int s; /* second digit of a number e.g 1[2] */

	for (x = 1; x <= 10; x++)
	{
		for (counter = 0; counter <= 14; counter++)
		{
			f = counter / 10;
			s = counter % 10;

			if (f)
				_putchar('0' + f);
			_putchar('0' + s);
		}
		_putchar('\n');
	}
}
