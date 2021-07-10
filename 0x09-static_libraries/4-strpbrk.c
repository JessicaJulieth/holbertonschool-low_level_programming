#include "holberton.h"

/**
 * _strpbrk -search string for any set of bytes
 * @s: pointer
 * @accept: pointer that accepts specific characteres
 * Return: Returns a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}
