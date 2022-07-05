#include <stdio.h>
include "main.h"

/**
 * print_to_98 - Check Holberton
 * @n: A input integer
 * Description: function that prints all natural numbers
 * from n to 98, followed by a new line
 * Return: void
 */
void print_to_98(int n)
{
if (n < 98)
{
while (n < 98)
{
	printf("%d, ", n);
	n++;
}
}
else if (n > 98)
{
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
}
printf("98\n");
}
