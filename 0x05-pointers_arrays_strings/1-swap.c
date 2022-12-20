#include "main.h"

/**
 * swap_int - it a function that swaps the value of two Integers
 * @a: First Interger param
 * @b: Second Integer param
 * Return - void
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;

}
