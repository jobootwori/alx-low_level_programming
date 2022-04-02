#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Prints the number of argumnets
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		} printf("%d\n", sum);
	}
	return (0);
}
