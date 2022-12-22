#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: sets a limit of the number of
 * char to copy from the src
 * Return: returns pointer char string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while ((i < n) && src[i] != '\0')
	{
		dest[i] = src[ia];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
