#include <stdio.h>

/**
 * main - Entry point
 *
 * description - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long int sum;
	long int first, second;
	int counter;

	sum = 0;
	first = 0;
	second = 1;
	counter = 0;

	while (counter < 49)
	{
		sum = first + second;
		printf("%ld, ", sum);
		first = second;
		second = sum;

		counter++;
	}
	sum = first + second;
	printf("%ld\n", sum);

	return (0);
}
