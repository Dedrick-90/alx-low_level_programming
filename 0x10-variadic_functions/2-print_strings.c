#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings, followed by a new line.
 * @separator: to print between strings
 * @n: number of string to be printed
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			print("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
