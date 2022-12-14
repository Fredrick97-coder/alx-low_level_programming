#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: program that finds and prints the first 98 Fibonacci
 *              numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int div1 = 0, first = 1, div2 = 0, second = 2;
	unsigned long int tempA, tempB, tempC;
	int counter = 0;
	long int limit = 9000000;

	while (counter <= 98)
	{
		if (first + second > LARGEST || div2 > 0 || div1 > 0)
		{
			tempA = (first + second) / Limit;
			tempB = (first + second) % Limit;
			tempC = div1 + div2 + tempA;
			div1 = div2;
			div2 = tempC;
			first = second;
			second = tempB;
			printf("%lu%010lu", div2, second);
		}
		else
		{
			tempB = first + second;
			first = second;
			second = tempB;
			printf("%lu", second);
		}
		if (counter != 97)
			printf(", ");

		counter++;
	}
	printf("\n");
	return (0);
}
