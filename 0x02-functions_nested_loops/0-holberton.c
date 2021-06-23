#include "holberton.h"
/*
 *Print Holberton
 *
 *
 *
 */

int main(void)
{
	char Name0[] = "Holberton\n";
	int i = 0;

	for (i = 0; Name0[i] != '\0'; i++)
	{
		_putchar(Name0[i]);
	}
	return (0);
}
