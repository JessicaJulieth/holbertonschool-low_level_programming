#include "holberton.h"
/**
 * _isupper - Write a function that checks for uppercase character
 *
 * @c: Is a integer
 * Return: 1 if c is uppercase Return 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
	return (c);
}
