#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checkerr
 * @s: stringg
 *
 * Return: 0 if a no and 1 otherwise
 */
int is_digit(char *s)
{
	int l = 0;

	while (s[l])
	{
		if (s[l] < '0' || s[l] > '9')
			return (0);
		l++;
	}
	return (1);
}

/**
 * _strlen -  lengths
 * @s: stringgg
 *
 * Return: lengthstring
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 * errors - handless
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - program that multiplies two positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *sss1, *sss2;
	int lenn1, lenn2, lenn, l, carryy, d1, d2, *rt, x = 0;

	sss1 = argv[1], sss2 = argv[2];
	if (argc != 3 || !is_digit(sss1) || !is_digit(sss2))
		errors();
	lenn1 = _strlen(sss1);
	lenn2 = _strlen(sss2);
	lenn = lenn1 + lenn2 + 1;
	rt = malloc(sizeof(int) * lenn);
	if (!rt)
		return (1);
	for (l = 0; l <= lenn1 + lenn2; l++)
		rt[l] = 0;
	for (lenn1 = lenn1 - 1; lenn1 >= 0; lenn1--)
	{
		d1 = sss1[lenn1] - '0';
		carryy = 0;
		for (lenn2 = _strlen(sss2) - 1; lenn2 >= 0; lenn2--)
		{
			d2 = sss2[lenn2] - '0';
			carryy += rt[lenn1 + lenn2 + 1] + (d1 * d2);
			rt[lenn1 + lenn2 + 1] = carryy % 10;
			carryy /= 10;
		}
		if (carryy > 0)
			rt[lenn1 + lenn2 + 1] += carryy;
	}
	for (l = 0; l < lenn - 1; l++)
	{
		if (rt[l])
			x = 1;
		if (x)
			_putchar(rt[l] + '0');
	}
	if (!x)
		_putchar('0');
	_putchar('\n');
	free(rt);
	return (0);
}
