#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets
 *
 * Description - prints 10x of all alphabets
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int iterator = 1;

	while (iterator <= 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		iterator++;
	}
}
