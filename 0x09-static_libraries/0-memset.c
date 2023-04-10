#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting
 * @b: desire
 * @n: number
 *
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	int l = 0;

	for (; n > 0; l++)
	{
		s[l] = b;
		n--;
	}
	return (s);
}
