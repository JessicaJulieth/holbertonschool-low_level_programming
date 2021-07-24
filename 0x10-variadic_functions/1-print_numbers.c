#include <stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Print
 * @separator: String
 * @n: number
 * Return:(0)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list X;

	va_start(X, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(X, int));

		if (separator && i != (n - 1))
			printf("%s", separator);
	}
		va_end(X);
		printf("\n");
}
