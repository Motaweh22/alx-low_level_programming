#include "main.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: input onee
 * @s2: input twoo
 * Return: s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *mach;
int x, y;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;

mach = malloc(sizeof(char) * (x + y + 1));
	if (mach == NULL)
		return (NULL);

x = y = 0;
	while (s1[x] != '\0')
	{
		mach[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		mach[x] = s2[y];
		x++, y++;
	}
mach[x] = '\0';
return (mach);
}
