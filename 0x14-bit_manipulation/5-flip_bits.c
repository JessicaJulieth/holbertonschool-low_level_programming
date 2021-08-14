#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 * @n: Integer
 * @m: Integer
 *
 * Return: The number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit1;
	unsigned int x;

	bit1 = n ^ m;
	x = 0;

	while (bit1)
	{
		if (bit1 & 1)
			x++;

		bit1 >>= 1;
	}

	return (x);
}
