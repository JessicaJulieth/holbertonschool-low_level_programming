#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function to concatenate 2 strings
 * @s1: a string
 * @s2: a string
 * @n: first n bytes of second string
 * Return: s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (y = 0; *(s1 + y); y++)
	{}
	for (z = 0; *(s2 + z); z++)
	{}
	if (n < z)
	{
		z = n;
	}
	x = malloc((y + z + 1) * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}
	for (y = 0; *(s1 + y); y++)
	{
		*(x + y) = *(s1 + y);
	}
	for (z = 0; z < n && *(s2 + z); y++, z++)
	{
		*(x + y) = *(s2 + z);
	}
	*(x + y) = '\0';
	return (x);
}
