#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string array
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (; i < n; i++)
		s[i] = b;

	return (s);
}
