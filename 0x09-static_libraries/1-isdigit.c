#include "main.h"

/**
 *_isdigit - check for numbers
 *
 * @c: parameter to print
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}

	return (0);
}
