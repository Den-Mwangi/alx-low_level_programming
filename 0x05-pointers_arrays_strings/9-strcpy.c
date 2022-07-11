#include "main.h"

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination
 * @src: source
 * Return: char with copy of string
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
