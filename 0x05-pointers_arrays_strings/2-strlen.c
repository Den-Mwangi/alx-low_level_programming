#include "main.h"

/**
 * _strlen - get a string length
 * @s: character pointer
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
