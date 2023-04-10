#include "main.h"
/**
 * _strlen - returns the length
 * @s: stringg
 * Return: len
 */
int _strlen(char *s)
{
	int li = 0;

	while (*s != '\0')
	{
		li++;
		s++;
	}

	return (li);
}
