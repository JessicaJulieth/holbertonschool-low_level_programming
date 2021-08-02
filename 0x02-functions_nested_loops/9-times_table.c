#include "holberton.h"
/**
* times_table - Prints the 9 times table
*
* Return: Minute in a specific day
*/
void times_table(void)
{
	int X, y, z;

	y = 0;
	while (y < 10)
	{
		X = 0;
		while (X < 10)
		{
			z = X * y;
			if (z >= 10)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else
			{
				if (X != 0)
				{
				_putchar(' ');
				}
				_putchar(z + '0');
			}
			X++;
			if (X != 10)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		y++;
		_putchar('\n');
	}
}