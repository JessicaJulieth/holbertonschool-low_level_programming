#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * str_concat - Concatenate 2 strings
 * @s1: string1
 * @s2: string2
 * Return: p or NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int x, y;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (x = 0; *(s1 + x); x++)
	{
	}
	for (y = 0; *(s2 + y); y++)
	{
	}
	s = malloc(sizeof(char) * (x + y + 1));

	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; *(s1 + x); x++)
	{
		*(s + x) = *(s1 + x);
	}
	for (y = 0; *(s2 + y); x++, y++)
	{
		*(s + x) = *(s2 + y);
	}
	return (s);
}
