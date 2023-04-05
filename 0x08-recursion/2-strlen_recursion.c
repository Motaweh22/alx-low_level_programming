#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @c: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *c)
{
	int length = 0;

	if (*c)
	{
		length++;
		length += _strlen_recursion(c + 1);
	}

	return (length);
}
