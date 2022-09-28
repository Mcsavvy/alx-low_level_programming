#include "main.h"

/**
 * _pow_recursion - return the value of a base raised to an exponenet
 * @x: the base
 * @y: the exponent
 * Return: x raise to power y
 */
int _pow_recursion(int x, int y)
{
	/* 0 raise to the power of y is 0 */
	if (x == 0)
		return (0);
	/* x raise to the power of 1 is x */
	if (y == 1)
		return (x);
	/* x raise to power 0 is 1 */
	if (y == 0)
		return (1);
	/**
	 * for this script, we'll assume that
	 * x raised to the power of a negative int is -1
	 */
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
