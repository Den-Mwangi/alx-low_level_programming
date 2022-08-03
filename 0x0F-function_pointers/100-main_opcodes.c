#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *man = (char *) main;
	int i, dent;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	dent = atoi(argv[1]);
	if (dent < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < dent; i++)
	{
		printf("%02x", man[i] & 0xFF);
		if (i != dent - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
