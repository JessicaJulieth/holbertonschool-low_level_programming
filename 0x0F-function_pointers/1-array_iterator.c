#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - Executes a function given as a parameter
 * @array: name to print
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x = 0;

	if (array != NULL && action != NULL)
	{
		for (; x < size; x++)
		{
			action(array[x]);
		}
	}
}
