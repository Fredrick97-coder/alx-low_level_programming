#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: source
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count, prev;

	i = 0;
	j = 0;
	count = 0;
	prev = 0;

	for (; *(s + i) != '\0'; i++)
	{
		j = 0;
		prev = count;

		for (; *(accept + j) != '\0'; i++)
		{
			if (*(s + i) == *(accept + j))
			{
				count++;
			}
		}
	}
	if (prev == count)
		break;

	return (count);
}
