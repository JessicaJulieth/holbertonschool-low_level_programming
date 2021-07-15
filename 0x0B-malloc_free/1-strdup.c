#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * _strdup - contains a copy of the string given as a parameter
 * @str: string type char
 * Return: p Success or NULL Fail
 */
char *_strdup(char *str)
{
	unsigned int x, y;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	for (x = 0; *(str + x); x++)
	{
	p = malloc(sizeof(char) * (x + 1));
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (y = 0; y <= x ; y++)
	{
		*(p + y) = *(str + y);
	}
	return (p);
}
