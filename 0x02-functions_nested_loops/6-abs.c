#include "main.h"

/**
 * _abs - this function computes the absolute value of an integer
 *
 * @n: n is an integer
 *
 * Return: it returns an integer value whether -ve || +ve
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	else
		return (n);
}
