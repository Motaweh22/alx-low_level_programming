#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - function that concatenates two strings.
 * @s1: string1
 * @s2: string2
 * @n: number
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *stringg;
	unsigned int l = 0, y = 0, lenn1 = 0, lenn2 = 0;

	while (s1 && s1[lenn1])
		lenn1++;
	while (s2 && s2[lenn2])
		lenn2++;

	if (n < lenn2)
		stringg = malloc(sizeof(char) * (lenn1 + n + 1));
	else
		stringg = malloc(sizeof(char) * (lenn1 + lenn2 + 1));

	if (!stringg)
		return (NULL);

	while (l < lenn1)
	{
		stringg[l] = s1[l];
		l++;
	}

	while (n < lenn2 && l < (lenn1 + n))
		stringg[l++] = s2[y++];

	while (n >= lenn2 && l < (lenn1 + lenn2))
		stringg[l++] = s2[y++];

	stringg[l] = '\0';

	return (stringg);
}
