#include "holberton.h"
/**
 * print_alphabet - Print alphabet in lower case
 * Return: void
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
