#include "main.h"

/**
 * _atoi - convert a string into integer.
 *
 * @s: string.
 *
 * Return: res.
 */

int _atoi(char *s)
{
	int sn = 1, l = 0;
	unsigned int rs = 0;

	while (!(s[l] <= '9' && s[l] >= '0') && s[l] != '\0')
	{
		if (s[l] == '-')
			sn *= -1;
		l++;
	}
	while (s[l] <= '9' && (s[l] >= '0' && s[l] != '\0'))
	{
		rs = (rs * 10) + (s[l] - '0');
		l++;
	}
	rs *= sn;
	return (rs);
}
