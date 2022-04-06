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
	unsigned int i;
	char * str;

	str = malloc(sizeof(char) * size);
	if (str == NULL && size == 0)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
	free (str);
}
