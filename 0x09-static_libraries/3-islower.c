#include "holberton.h"
/**
 * _islower - Return function that checks for lowercase character
 * @c: checks for lowercase character
 * Return: 1 if is lowercase, 0  otherwise
 */

int _islower(int c)
{
	if  (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
