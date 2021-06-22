#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 *
 * Return: Always 0 ()
*/
int main(void)
{
	char ch;

	for (ch = 97; ch <= -122; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
