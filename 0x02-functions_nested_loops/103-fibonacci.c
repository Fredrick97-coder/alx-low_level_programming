#include <stdio.h>

/**
 * main - Entry point
 *
 * description - prints the sum of all even Fibonacci numbers below 4,000,000
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int total_sum, sum, first, second;

	total_sum = 0;
	sum = 0;
	first = 0;
	second = 1;

	while (sum < 4000000)
	{
		sum = first + second;
		sum % 2 == 0 ? total_sum += sum : 0;
		first = second;
		second = sum;
	}

	printf("%ld\n", total_sum);

	return (0);
}
