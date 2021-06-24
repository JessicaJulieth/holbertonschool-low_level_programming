#include "holberton.h"
/**
 * print_alphabet_x10 - Print alphabet in lower casex10
 * Return: void
*/

void print_alphabet_x10(void)
{
	int i;
	int x;

	for (x = 0; x < 10; x++, _putchar('\n'))
	{
		for (i = 97; i <= 122; i++)
			_putchar(i);
	}
}
