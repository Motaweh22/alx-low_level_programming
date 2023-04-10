#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: checker
 *
 * Return: 0 if true and 1 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
