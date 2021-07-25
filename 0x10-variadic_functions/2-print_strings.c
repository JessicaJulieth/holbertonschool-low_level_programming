#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Print
 * @n: Number
 * @separator: separator
 * Return: always zero
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list y;
	char *x;

	va_start(y, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(y, char *);
		printf("%s", ((x == NULL) ? "(nil)" : x));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(y);
}
