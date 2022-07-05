#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the the alphabet in lowercase
 *
 * Description - print alphabet followed by new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char c = '\0';
	int n = 10;

	while (n--)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n')
	}
}
