#include "main.h"

/**
 * _check_prime - checks if number is prime
 * @num: num integer
 * @count: counter integer
 * Return: return integer
 */

int _check_prime(int num, int count)
{
	if (num == count)
	{
		return (1);
	}
	if (!(num % count))
	{
		return (0);
	}
	return (_check_prime(num, count + 1));
}


/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @n: n integer
 * Return: returns Integer
 */

int is_prime_number(int n)
{
	int count = 2;

	if (n < count)
	{
		return (0);
	}
	return (_check_prime(n, count));
}
