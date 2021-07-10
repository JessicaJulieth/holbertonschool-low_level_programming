#include "holberton.h"

/**
 * _memcpy - Copies memory area.
 * @dest: POinter
 * @src: POinter
 * @n: Unsigned INteger
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
		dest[n] = src[n];
	return (dest);
}
