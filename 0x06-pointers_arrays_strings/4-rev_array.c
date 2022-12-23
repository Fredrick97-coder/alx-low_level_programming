#include "main.h"

/**
 * reverse_array - reverses the content of an
 * array of integers
 * @a: arr of integers
 * @n: length of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int half = n / 2;
	int i, left, right;

	i = 0;
	n--;

	while (i < half)
	{
		left = a[n - i];
		right = a[i];
		a[i] = left;
		a[n - i] = right;

		i++;
	}
}
