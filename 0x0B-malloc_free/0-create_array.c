#include <stdio.h>

/**
 * main - Prints the number of argumnets
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0
 */
char *create_array(unsigned int size, char c)
{
	c = malloc(sizeof(char));
	if (c == NULL)
	{
		return (0);
	}

	free (c);
}
