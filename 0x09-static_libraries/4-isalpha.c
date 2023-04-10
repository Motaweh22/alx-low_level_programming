#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: checker
 * Return: 1 if c is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
