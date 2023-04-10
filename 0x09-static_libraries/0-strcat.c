#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: valuee
 * @src: valuee
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int l;
	int y;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	y = 0;
	while (src[y] != '\0')
	{
		dest[l] = src[y];
		l++;
		y++;
	}

	dest[l] = '\0';
	return (dest);
}
