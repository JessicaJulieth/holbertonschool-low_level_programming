#include "holberton.h"
/**
 *  print_last_digit - function that prints the last digit of a number.
 *  @n: Variable type int.
 *  Return: Return the last digit of a number.
 */

int print_last_digit(int n)
{

	int x = n % 10;

	if (n < 0)
	{

		x *= (-1);
	}
	_putchar(x + '0');
	return (x);
}
