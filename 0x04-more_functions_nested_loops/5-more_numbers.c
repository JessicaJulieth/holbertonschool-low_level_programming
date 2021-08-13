#include "main.h"

/**
 * more_numbers -  Prints 10 times the numbers
 *
 * Return: void
 */

void more_numbers(void)
{
	char x, y;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y <= 14)
		{
			if (y > 9)
			{
				_putchar((y / 10) + '0');
			}
			_putchar((y % 10) + '0');

			y++;
		}
		_putchar('\n');
		x++;
	}
}
