#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: Point to array
 * @n: Number of elements of the array to be printed
 *
 * Return: void.
 */
void print_array(int *a, int n)

{
int x = 0;
int y = n - 1;
while (x < y)
{
printf("%d, ", a[x]);
x++;
if (x == y)
{
printf("%d", a[x]);
}
}
printf("\n");
}
