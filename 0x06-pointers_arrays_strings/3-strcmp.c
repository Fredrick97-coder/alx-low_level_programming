#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: leftside string
 * @s2: rightside string
 *
 * Return: returns an integer
 */

int _strcmp(char *s1, char *s2)
{
	int res, i;

	i = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			res = 0;
		else
		{
			res = s1[i] - s2[i];
			break;
		}
	}
	return (res);
}
