#include "holberton.h"
/**
 * _isdigit - Check for a digit
 * @c: in a integer
 * Return: 1 if c is a digitvreturn 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
