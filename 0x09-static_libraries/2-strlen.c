#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int str_len = 0;

	while (s[str_len] != '\0')
	{
		str_len++;
	}

	return (str_len);
}
