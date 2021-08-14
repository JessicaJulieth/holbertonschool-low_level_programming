#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: Point
 *
 * Return: Void
 */

void print_rev(char *s)
{
	int x, y;

	x = 0;
	while (*(s + x) != '\0')
	{
		x++;
	}

	y = x - 1;
	while (y >= 0)
	{
		_putchar(*(s + y));
		y--;
	}

	_putchar('\n');
}
