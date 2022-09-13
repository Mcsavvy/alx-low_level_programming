#include "main.h"

/**
 * increase - increase @n by 1
 *
 * @n: a pointer to an integer
 *
 * Return: void
 */
void increase(int *n)
{
	*n = *n + 1;
}

/**
 * decrease - decrease number by 1
 *
 * @n: a pointer to an integer
 *
 * Return: void
 */
void decrease(int *n)
{
	*n = *n - 1;
}

/**
 * gt - tests if @a is greater than or equal to @b
 *
 * @a: first number
 * @b: second number
 *
 * Return: 1 if true, 0 otherwise
 */
int gt(int a, int b)
{
	if (a >= b)
		return (1);
	return (0);
}

/**
 * lt - tests if @a is less than or equal to @b
 *
 * @a: first number
 * @b: second number
 *
 * Return: 1 if true, 0 otherwise
 */
int lt(int a, int b)
{
	if (a <= b)
		return (1);
	return (0);
}


/**
 * print_to_98 - print all natural numbers from @n to 98
 *
 * @n: starting point
 *
 * Return: void
 */
void print_to_98(int n)
{
	int (*compare)(int, int);
	void (*op)(int *);
	int i;


	if (n > 98)
	{
		compare = &gt;
		op = &decrease;
	}
	else
	{
		compare = &lt;
		op = &increase;
	}

	for (i = n; compare(i, 98); op(&i))
	{
		if (i == 98)
			printf("%d", i);
		else
			printf("%d, ", i);
	}
	printf("\n");
}
