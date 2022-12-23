#include <stdio.h>
#include "main.h"

/**
 * infinite_add - add two string numbers
 * @n1: string number to add to n2
 * @n2: string number to add to n1
 * @r: buffer to store the sum
 * @size_r: size of buffer
 * return: pointer to sum or 0 if it does not fit in r
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int l1 = 0, l2 = 0, lS = 0;
	
	while (*(n1 + l1++))
		;
	while (*(n2 + l2++))
		;
	printf("%d, %d\n", l1, l2);
	return (r);
}
