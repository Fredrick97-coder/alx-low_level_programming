#include "main.h"

/**
 * _islower - lowercase character check
 *
 * @c: c is an ascii char
 *
 * Return:  1 if lowercase  and 0 for otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
