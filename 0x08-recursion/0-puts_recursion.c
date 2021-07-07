#include "holberton.h"

/**
 * _puts_recursion - Prints a string
 * @s: Character string to be printed.
 */

void _puts_recursion(char *s)
{
	char x;

	if (*s)
		x = *s;
	else
		x = '\n';
	_putchar(x);

	if (*s)
		_puts_recursion(s + 1);
}
