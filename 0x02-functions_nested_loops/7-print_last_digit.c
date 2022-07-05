#include "main.h"

/**
 * print_last_digit - function that print last digit of number
 * @n: number to be checked
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
int nv;

if (n < 0)
	nv = -1 * (n % 10);
else
	nv + n % 10;

_putchar(nv + '0');
return (nv);
}
