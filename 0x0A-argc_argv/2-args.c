#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
