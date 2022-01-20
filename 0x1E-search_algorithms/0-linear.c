#include "search_algos.h"

/**
 * linear_search- searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located.
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (!size || array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		}
	return (-1);
}
