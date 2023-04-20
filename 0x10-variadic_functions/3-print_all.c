#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything.
 * @format: listtt
 */
void print_all(const char * const format, ...)
{
	int l = 0;
	char *strr, *ssep = "";

	va_list listt;

	va_start(listt, format);
	if (format)
	{
		while (format[l])
		{
			switch (format[l])
			{
				case 'c':
					printf("%s%c", ssep, va_arg(listt, int));
					break;
				case 'i':
					printf("%s%d", ssep, va_arg(listt, int));
					break;
				case 'f':
					printf("%s%f", ssep, va_arg(listt, double));
					break;
				case 's':
					strr = va_arg(listt, char *);
					if (!strr)
						strr = "(nil)";
					printf("%s%s", ssep, strr);
					break;
				default:
					l++;
					continue;
			}
			ssep = ", ";
			l++;
		}
	}
	printf("\n");
	va_end(listt);
}
