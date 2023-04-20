#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - unction that returns the sum of all its parameters.
 * @n: The number of paramteeeers
 * @...: variable of paaaramters
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list appp;
	unsigned int l, summ = 0;

	va_start(appp, n);

	for (l = 0; l < n; l++)
		summ += va_arg(appp, int);

	va_end(appp);

	return (summ);
}
