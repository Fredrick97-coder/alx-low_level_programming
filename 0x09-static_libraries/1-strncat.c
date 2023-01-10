#include "main.h"

/**
 * _strncat - concats two string using atmost
 * n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: n integral byte(s) type
 *
 * Return: some char string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}

	*ptr = '\0';
	return (dest);
}
