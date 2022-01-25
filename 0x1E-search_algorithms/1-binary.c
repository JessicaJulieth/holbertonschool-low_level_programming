#include "search_algos.h"

/**
 * linear_search- searches for a value in an array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: The first index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t x = 0, y = 0, z= 0, i = size - 1;

	if (!array)
		return (-1);

	while (y <= i)
	{
		printf("Searching in array: ");
		for (z = y; z <= i; z++)
		{
			if (z == i)
				printf("%d\n", array[z]);
			else
				printf("%d, ", array[z]);
		}

		x = (y + i) / 2;
		if (array[x] == value)
			return (x);
		else if (array[x] > value)
			i = x - 1;
		else
		{
			y = x + 1;
		}
	}
	return (-1);
}