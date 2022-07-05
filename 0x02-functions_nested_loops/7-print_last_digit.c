#include "main.h"

/**
 * print_last_digit - function that print last digit of number
 * @n: number to be checked
 *
 * Description: prints the last digit of a number
 *
 * Return: integer
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
