#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - print all single digit numbers of base 10
 *starting from 0 followed by new line
 *Return: Always 0 (Success)
 */
int main(void)
{
char c = '0';
while (c <= '9')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
