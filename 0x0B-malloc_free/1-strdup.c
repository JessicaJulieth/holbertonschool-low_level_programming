#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - Copy of a string
 * @str: String
 * Return: p (Success) NULL (Fail)
 */
char *_strdup(char *str)
{
	unsigned int x, y, length;
	char *p = NULL;

	if (str == NULL)
		return (NULL);

	length = 0;

	for (x = 0; str[x] != '\0'; x++)
		length++;

	p = malloc((length + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (y = 0; y <= length; y++)
	{
		p[y] = str[y];
	}

	return (p);
}
