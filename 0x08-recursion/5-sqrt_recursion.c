#include "main.h"

/**
 * _check_root - this function checks the truthy of the
 * integer divisor
 * @sq: square integer
 * @root: divisor integer
 * Return: returns integer
 */


int _check_root(int sq, int root)
{
	if (root * root == sq)
		return (root);
	else if (root > sq / root)
		return (_check_root(sq, root - 1));
	else if (root < sq / root)
		return (_check_root(sq, root + 1));
	else
		return (-1);
}


/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: n integer
 * Return: returns integer
 */

int _sqrt_recursion(int n)
{
	int d;

	d = 1;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (_check_root(n, d));
}
