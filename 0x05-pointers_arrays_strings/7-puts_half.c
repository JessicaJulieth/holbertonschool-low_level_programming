#include "main.h"

/**
 * puts_half -  Prints half of a string
 * @str: Pointer to string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int x, half;

	x = 0;

	while (*(str + x) != '\0')
		x++;

	if (x % 2 != 0)
	{
		x += 1;
	}
	for (half = x / 2; *(str + half) != '\0'; half++)
	{
		_putchar(*(str + half));
	}
	_putchar('\n');
}
