#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: n is an integer argument
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
 */

int print_last_digit(int n)
{
	int lastnum = n % 10;

	if (n < 0)
		lastnum *= -1;

	_putchar(lastnum + '0');

	return (lastnum);
}
