#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Print a name
 * @name: Name to print
 * @f: Pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	(*f)(name);
}
