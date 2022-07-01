#include <stdio.h>

/**
 *main - print all numbers of base 16 in lowercase followed by new line
 *Return: Always 0 (Success)
 */
int main(void)
{
int i, y;
for (i = 0; i < 10; i++)
{
putchar (i + '0');
}
for (y = 'a'; y <= 'f'; y++)
{
putchar (y);
}
putchar ('\n');
return (0);
}
