#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point to perform operation
 * @argc: argument counter
 * @argv: argumnet vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int Number2, (*Pointer_Obtener_Operador)(int Number1, int Number2);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	Pointer_Obtener_Operador = get_op_func(&*argv[2]);
	if (!Pointer_Obtener_Operador)
	{
		printf("Error\n");
		exit(99);
	}

	Number2 = atoi(*(argv + 3));

	if (!Number2 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", Pointer_Obtener_Operador(atoi(*(argv + 1)), Number2));
	return (0);
}
