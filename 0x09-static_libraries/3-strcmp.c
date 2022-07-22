#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2:  sring 2
 * Return: 0 if s1 and s2 are equal, otherwise other numbers
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (op);
}
