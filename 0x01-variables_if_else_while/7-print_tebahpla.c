#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *main - print lowercase alphabet in reverse followed by new line
 *Return: Always 0 (Success)
 */
int main(void)
{
char c = 'z';
while (c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
