#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 ()
*/
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n != 56)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
