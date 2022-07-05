#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n: the number tobe checked
 *
 * Return: 1 and print + if n is greater than zero
 * 0 and print zero if n is zero
 * -1 and print - if n is less than zero
 */
int print_sign(int n)
{
int sign = 0;

if (n > 0)
{
sign = 1;
_putchar('+');
}
else if (n < 0)
{
sign = -1;
_putchar('-');
}
else
{
	sign = 0;
	_putchar('0');
}
return (sign);
}
