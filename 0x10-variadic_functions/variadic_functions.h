#ifndef VARIADIC_F
#define VARIADIC_F
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * struct x - Struct X
 *
 * @ch: The Calificador
 * @point: Pointer
 */
typedef struct x
{
	char *ch;
	void (*point)();
} format_;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
