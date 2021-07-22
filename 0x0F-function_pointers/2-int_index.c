#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Searches for an integer
 * @array: array integers
 * @size: size of array
 * @cmp: Poniter
 * Return: value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size < 0)
		return (-1);
	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]))
				return (x);
		}
	}
return (-1);
}
