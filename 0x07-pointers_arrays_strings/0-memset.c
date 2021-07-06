#include "holberton.h"

/**
 * _memset - Function that fills memory with a constant byte.
 * @s: array to be changed
 * @b: constant byte
 * @n: number of bytes
 * Return: Returns the start of the pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		s[n] = b;
	return (s);
}
