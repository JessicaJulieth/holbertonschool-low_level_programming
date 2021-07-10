#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints t minimum number of coins to make change for an amount of money
 * @argc: Argument count
 * @argv: Argument vector
 * Return: (1)
 */
int main(int argc, char **argv)
{
		int x, cents;

		if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			cents = 0;
			x = atoi(argv[1]);

			if (x < 0)
				printf("0\n");
			else
			{
				for (; x >= 25; cents++)
					x -= 25;
				for (; x >= 10; cents++)
					x -= 10;
				for (; x >= 5; cents++)
					x -= 5;
				for (; x >= 2; cents++)
					x -= 2;
				for (; x == 1; cents++)
					x -= 1;
				printf("%i\n", cents);
			}
		}
		return (0);
}
