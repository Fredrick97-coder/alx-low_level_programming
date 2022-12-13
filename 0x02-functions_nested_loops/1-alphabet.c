#include "main.h"

/**
 * print_alphabet - prints letters
 *
 * Description - prints all alphabets in the lower form
 *
 * Return: void (thus, has no return value)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
