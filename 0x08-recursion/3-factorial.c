#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: interger
 * Return: returns an integer
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
