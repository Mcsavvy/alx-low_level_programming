#include "main.h"

/**
 * wildcmp - compares two strings using wild cards
 *
 * @s1: the target string
 * @s2: the comparer (can contain * which would match 0 or more characters)
 *
 * Return: 1 if the strings match, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	char *target = s1, *comp = s2;
	int wildcards = 0;

	if (!*target && !*comp)		/* if both strings are empty, they match */
		return (1);
	while (*comp == '*')		/* extract all wildcards from comp */
	{
		comp = comp + 1;
		wildcards = 1;
	}
	/* if target is empty and comp is not, they don't match */
	if (!*target && *comp)
		return (0);
	if (wildcards)
	{
		if (!*comp)			/** if comp ends with a wild card, they match */
			return (1);

		while (*target)
		{
			if (*target == *comp) /* GREEDY MATCH 😝😝😝 */
			{
				if (wildcmp(target + 1, comp + 1))
					return (1);
			}
			target = target + 1;
		}
		if (!*target && *comp)	/* target is empty but comp is not */
			return (0);
	}
	else
	{
		/* if comp is empty but target is not, they don't match */
		if (!*comp && *target)
			return (0);
		if (*target == *comp)	/* check if they match */
			return (wildcmp(target + 1, comp + 1));
	}
	return (0);
}

