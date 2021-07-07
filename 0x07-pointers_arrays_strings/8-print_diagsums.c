#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
 */
void print_diagsums(int *a, int size)

{
	int c;
	int s1, s2;
	int z;

	s1 = 0;
	s2 = 0;
	z = size * size;

	for (c = 0; c < z; c += size + 1)

	{
		s1 = s1 + a[c];
	}
	for (c = size -1; c < z; c += size -1)
	{

		s2 = s2 + a[c];
	}
	printf ("%d, %d \n", s1, s2);
}
