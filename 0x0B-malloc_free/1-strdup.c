#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	int len, i;
	char *arr;

	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (*(str + len) != '\0')
	{
		len++;
	}

	arr = malloc(len * sizeof(char) + 1);
	if (arr == NULL)
		return (NULL);

	for (; i < len; i++)
	{
		arr[i] = str[i];
	}
	arr[i] = '\0';


	return (arr);
}
