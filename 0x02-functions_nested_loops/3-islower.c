#include "main.h"

/**
 * _islower - lowercase character check
 *
 * @c: is an ascii char
 *
 * description - checking for lowercase character
 *
 * return - 1 for lowercase  and 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
