#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create an array of char's
 * @size: array size
 * @c: char of initialitation
 * Return: NULL if size = 0, Return a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x = NULL;

	if (size == 0)
		return (NULL);

	x = malloc(size * sizeof(char));
	if (x == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		x[i] = c;

	x[size] = '\0';

	return (x);
}
