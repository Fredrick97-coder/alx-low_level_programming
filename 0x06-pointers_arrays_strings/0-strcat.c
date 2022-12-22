#include "main.h"

/**
 * _strcat - this function concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * description - the function concats the strings dest and src
 *
 * Return: returns a character pointer
 */

char *_strcat(char *dest, char *src)
{
	if ((dest != NULL) && (src != NULL))
	{
		char *desc = dest;

		while (*desc != '\0')
		{
			desc++;
		}
		while (*src != '\0')
		{
			*desc++ = *src++;
		}
		*desc = ('\0');

		return (*dest);
	}
	return ("NULL");
}
