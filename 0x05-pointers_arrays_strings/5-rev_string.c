#include "main.h"

/**
* rev_string - Reverse string
* @s: Point
*
* return: void
*/

void rev_string(char *s)
{
	int x, y, tmp;

	x = 0;
	while (*(s + x) != '\0')
	{
		x++;
	}
	x -= 1;
	y = 0;
	while (y < x)
	{
		tmp = *(s + y);
		*(s + y) = *(s + x);
		*(s + x) = tmp;
		y++;
		x--;
	}
}
