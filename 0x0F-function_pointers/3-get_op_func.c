#include "3-calc.h"

/**
 * get_op_func - selects the correct calculator operator
 * @s: a pointer to an operator (+|-|*|/|%)
 * Return: a pointer to an operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*(ops + i)->op == *s)
			return ((ops + i)->f);
		i++;
	}
	return (NULL);
}
