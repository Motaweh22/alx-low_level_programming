#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: sstring.
 * @n: numbeeer
 * @...: vvariable
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nuums;
	unsigned int l;

	va_start(nuums, n);

	for (l = 0; l < n; l++)
	{
		printf("%d", va_arg(nuums, int));

		if (l != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(nuums);
}
