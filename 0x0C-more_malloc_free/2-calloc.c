#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - allocates memory for an array, using malloc~
 * @nmemb: number of element of array
 * @size: size of byte each element
 * Return: x
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x = NULL;
	unsigned int y = 0;

	if (!nmemb || !size)
		return (NULL);

	x = malloc(size * nmemb);

	if (!x)
		return (NULL);

	for (; y < (nmemb * size); y++)
		x[y] = 0;

	return (x);
}
