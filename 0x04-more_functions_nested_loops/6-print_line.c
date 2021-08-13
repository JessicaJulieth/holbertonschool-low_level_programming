#include "main.h"

/**
  * print_line - Draws a straight line in the terminal
  * @n: Numbers
  *
  * Return: Always 0.
  */

void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
