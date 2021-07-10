#include "holberton.h"
/**
 * _isalpha - Return function that checks alphabetic character
 * @c: checks alphabetic character
 * Return: 1 if c is a letter, lowercase or uppercase ,case, 0  otherwise
 */

int _isalpha(int c)
{
	if (c <= 90 && c >= 65)
		return (1);
	if  (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
