#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: valuee
 * @src: valuee
 * @n: valuee
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l;
	int y;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}
	y = 0;
	while (y < n && src[y] != '\0')
	{
	dest[l] = src[y];
	l++;
	y++;
	}
	dest[l] = '\0';
	return (dest);
}
