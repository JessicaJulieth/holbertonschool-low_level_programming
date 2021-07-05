#include "holberton.h"
/**
 * print_numbers - Print number
 *
 */
void print_numbers(void)

{
	char n;

	n = 48;
	while (n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
