#include "holberton.h"

/**
* swap_int - The values of two integers
* @a: value 1
* @b: value 2
* Return: ()
 **/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
