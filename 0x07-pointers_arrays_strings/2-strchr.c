#include "holberton.h"
#define NULL 0
int _strlen(char *s);

/**
 * *_strchr - locates a character in a string
 * @s: pointer to a string
 * @c: character with the n of index
 * Return:  pointer
 */
char *_strchr(char *s, char c)
{
	while (*s)
		if (*s != c)
			s++;
		else if (*s == c)
			break;
	return ((*s || !(c)) ? s : NULL);
}
