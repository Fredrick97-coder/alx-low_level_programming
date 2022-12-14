#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of array
 * @c: char to initialize array with
 * Return: NULL if size = 0, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	i = 0;

	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	if (size != 0)
	{
		while (i < size)
		{
			*(arr + i) = c;
			i++;
		}

		return (arr);
	}
	else
	{
		return (NULL);
	}
}
