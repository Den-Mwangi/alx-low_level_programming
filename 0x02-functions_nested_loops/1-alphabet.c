#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase followed by new line
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
