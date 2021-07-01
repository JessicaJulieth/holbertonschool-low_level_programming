#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: input string to print
 *
 * Return: ()
 **/

void _puts(char *str)
{
	int X = 0;

	while (str[X] != '\0')
	{
		_putchar(str[X]);
		X++;
	}
	_putchar('\n');
}
