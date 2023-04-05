#include "main.h"

/**
 * wildcmp - Compare strings
 * @st1: pointer to string
 * @st2: pointer to string
 * Return: 0
 */

int wildcmp(char *st1, char *st2)
{
	if (*st1 == '\0')
	{
		if (*st2 != '\0' && *st2 == '*')
		{
			return (wildcmp(st1, st2 + 1));
		}
		return (*st2 == '\0');
	}

	if (*st2 == '*')
	{
		return (wildcmp(st1 + 1, st2) || wildcmp(st1, st2 + 1));
	}
	else if (*st1 == *st2)
	{
		return (wildcmp(st1 + 1, st2 + 1));
	}
	return (0);
}
