#include "holberton.h"
#define NULL 0
/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	signed int Counter = 0;
	char *temp = needle;

	while (*haystack)
		if (!(*needle))
			break;
		else if (*needle != *haystack)
			needle = temp, haystack++, Counter = 0;
		else if (*needle == *haystack)
			Counter--, needle++, haystack++;
	return (!(*needle) ? haystack + Counter : NULL);
}
