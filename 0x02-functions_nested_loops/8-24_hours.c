#include "main.h"

/**
 * jack_bauer - print every minute of the day, starting from `00:00` to `23:59`
 *
 * Return: nothing at all :)
 */
void jack_bauer(void)
{

	int mins, hour, min;

	for (mins = 0; mins < (60 * 24); mins++)
	{
		hour = mins / 60;
		min = mins % 60;
		_putchar(48 + (hour / 10));
		_putchar(48 + (hour % 10));
		_putchar(':');
		_putchar(48 + (min / 10));
		_putchar(48 + (min % 10));
		_putchar('\n');
	}
}
