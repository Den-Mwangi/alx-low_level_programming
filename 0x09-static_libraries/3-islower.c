#include "main.h"

/**
 * _islower - check for lowercase character
 *
 * @c: character to be checked
 *
 * Return: 1 if lowercase, 0 if otherwise
 */
int _islower(int c)
{
return ('a' <= c && c <= 'z' ? 1 : 0);
}
