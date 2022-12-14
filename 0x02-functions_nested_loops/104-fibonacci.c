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
        unsigned long int first  = 0, second = 1, sum;

        int i;

        for (i = 1; i<= 98; i++)
        {
                sum = first + second;

                if (i != 98)
                        printf("%lu, ", sum);
                else
                        printf("%lu\n", sum);
                first = second;
                second = sum;
        }
        return (0);
}
