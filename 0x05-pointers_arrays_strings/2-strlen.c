#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: variable
 *
 * Return: length of string as int
 **/

int _strlen(char *s)
{
	int X = 0;

	while (s[X] != '\0')
	{

		X++;
	}
	return (X);
}
