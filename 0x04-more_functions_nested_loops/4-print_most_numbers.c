#include "holberton.h"
/**
 * print_most_numbers - Print nunbers
 *
 */
void print_most_numbers(void)

{
	char n;

	n = 48;
	while (n <= 57)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
