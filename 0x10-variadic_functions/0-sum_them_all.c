#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - sum of all parameters
 * @n: number
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add = 0;
	va_list point;

	if (n != 0)
	{
		va_start(point, n);
		for (i = 1; i <= n; i++)
			add += va_arg(point, int);
		va_end(point);
		return (add);
	}
	return (0);
}
