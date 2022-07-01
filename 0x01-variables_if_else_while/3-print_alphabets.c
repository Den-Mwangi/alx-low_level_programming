#include <stdio.h>

/**
 *main - Print the alphabet in lowercase then uppercase followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';
while (c <= 'Z')
{	
putchar(c);
c++;
}
c = 'A';
while (c <= 'Z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
