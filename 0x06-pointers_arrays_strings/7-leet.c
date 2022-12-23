#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: string array
 * Return: string array
 */

char *leet(char *s)
{
	char *res = s;
	char aeotl[] = { 'a', 'e', 'o', 't', 'l' };
	char num[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*res != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*res == aeotl[i] || *res == aeotl[i] - 32)
				*res = num[i] + '0';
		}
		res++;
	}
	return (s);
}
