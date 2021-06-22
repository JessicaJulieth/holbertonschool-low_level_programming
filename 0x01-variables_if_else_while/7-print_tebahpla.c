#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print the alphabet in lowercase in reverse
 *
 * Return: Always 0 ()
*/
int main(void)
{
	int letter = 122;

	while (letter >= 97)
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
