#include "holberton.h"

/**
 * _puts_recursion - Function that prints a string, followed by a new line.
 * @ArrayCharacter: Character string to be printed.
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
