#include "main.h"

int check_pal(char *c, int x, int ln);
int _strlen_recursion(char *c);

/**
 * is_palindrome - checks if a string is a palindrome
 * @c: string to reverse
 *
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *c)
{
	if (*c == 0)
		return (1);
	return (check_pal(c, 0, _strlen_recursion(c)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @c: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *c)
{
	if (*c == '\0')
		return (0);
	return (1 + _strlen_recursion(c + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @c: string to check
 * @x: iterator
 * @ln: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_pal(char *c, int x, int ln)
{
	if (*(c + x) != *(c + ln - 1))
		return (0);
	if (x >= ln)
		return (1);
	return (check_pal(c, x + 1, ln - 1));
}
