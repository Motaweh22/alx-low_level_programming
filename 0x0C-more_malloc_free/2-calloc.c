#include <stdlib.h>
#include "main.h"

/**
 * *_memset -  fills memoryy
 * @s: memoryy
 * @b: charr
 * @n: numberr
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int l;

	for (l = 0; l < n; l++)
	{
		s[l] = b;
	}

	return (s);
}

/**
 * *_calloc - function that allocates memory for an array
 * @nmemb: number
 * @size: size_element
 *
 * Return: pointerr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointerr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointerr = malloc(size * nmemb);

	if (pointerr == NULL)
		return (NULL);

	_memset(pointerr, 0, nmemb * size);

	return (pointerr);
}
