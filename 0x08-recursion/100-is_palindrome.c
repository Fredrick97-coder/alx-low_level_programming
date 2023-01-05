#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: string to calculate
 * Return: length of a string in Integer type
 */

int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(s + 1));
	else
		return (0);
}

/**
 * _compare - compares each char recursively
 * @s: string to compare
 * @first: first char in the string
 * @last: last char in the string iteratively
 * Return: Integer
 */

int _compare(char *s, int first, int last)
{
	if (s[first] != s[last])
		return (0);
	else if (first == last && s[first] == s[last])
		return (1);
	else if (first == last - 1 && s[first] == s[last])
		return (1);
	else
		return (_compare(s, first + 1, last - 1));
}

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not
 * @s: character string
 * Return: Integer
 */

int is_palindrome(char *s)
{
	int len, first, last;

	len = _strlen(s);
	first = 0;
	last = len - 1;

	if (len == 0 || len == 1)
		return (1);
	else
		return (_compare(s, first, last));

}
