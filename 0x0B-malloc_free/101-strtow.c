#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - splits strings to words
 * @str: string
 * Return: pointer to an array of words
 */

char **strtow(char *str)
{
	char **r;
	int x, y, c, len, z, a;

	c = z = 0;
	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] != ' ' && (str[x + 1] == ' ' || str[x + 1] == '\0'))
			c++;
	}
	if (c == 0)
		return (NULL);
	r = malloc(((c + 1) * sizeof(char *)));
	if (r == NULL)
		return (NULL);
	for (x = 0; str[x] !=  '\0' && z < c; x++)
	{
		if (str[x] != ' ')
		{
			len = 0;
			y = x;
			while (str[y] != ' ' && str[y] != '\0')
				y++, len++;
			r[z] = malloc((len + 1) * sizeof(char));
			if (r[z] == NULL)
			{
				for (z = z - 1; z >= 0; z++)
					free(r[z]);
				free(r);
				return (NULL);
			}
			for (a = 0; a < len; a++, x++)
				r[z][a] = str[x];
			r[z++][a] = '\0';
		}
	}
	r[z] = NULL;
	return (r);
}
