#include "holberton.h"

/**
 * _strlen - Function that returns the length of a string.
 * @s: Variable that stores the length to find.
 * Return: Return of the length
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s++)
		c++;
	return (c);
}
