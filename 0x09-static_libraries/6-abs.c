#include "holberton.h"
/**
 * _abs - Return function that computes the absolute value of an integer
 * @n: checks for lowercase character
 * Return: abs value
 */

int _abs(int n)
{
	if  (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
