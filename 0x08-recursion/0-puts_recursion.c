#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @c: input
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *c)
{
	if (*c)
	{
		_putchar(*c);
		_puts_recursion(c + 1);
	}

	else
		_putchar('\n');
}
