#include <stdio.h>

/**
 * main - My first print whitout printf or puts
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char N[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i = 0;

	for (i = 0; N[i] != '\0'; i++)
	{
		putchar(N[i]);
	}
	return (1);
}
