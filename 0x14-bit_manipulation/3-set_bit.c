#include "main.h"

/**
 * set_bit - list
 * @n: Pointer
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

nt set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
