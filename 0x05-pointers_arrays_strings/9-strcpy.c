#include "holberton.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: variable 1
 * @src: Variable 2
 * Return: pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *X = dest;

	while ((*dest++ = *src++))
		;
	return (X);
}
