#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search through
 * @needle: string to match
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *dup = haystack;

		while (*haystack == *needle && *haystack != '\0' && *needle != '\0')
		{
			needle++;
			haystack++;
		}
		if (!*needle != '\0')
		{
			return (dup);
		}
		haystack++;
	}
	return (0);
}
