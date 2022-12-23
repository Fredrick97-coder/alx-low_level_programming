#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * Return: returns char string
 */

char *cap_string(char *s)
{
	int i;
	int prev;

	for (i = 0; s[i] != '\0'; i++)
	{
		prev = i - 1;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= 32;
			else if (s[praev] >= 9 && s[prev] <= 41)
				s[i] -= 32;
			else if (s[prev] == 46)
				s[i] -= 32;
			else if (s[prev] == 59)
				s[i] -= 32;
			else if (s[prev] == 123 || s[prev] == 125)
				s[i] -= 32;
		}
	}

	return (s);
}
