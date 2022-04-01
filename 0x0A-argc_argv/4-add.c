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
	if (argc == 0)
	{
		printf("0\n");
	}
	if (argc > 0)
	{
		int i, sum;
		
		i = 0;
		while (i <= argc)
		{
			if (!isdigit(argv[i]))
			{
				printf("Error\n");
				return (1);
				break;
			}
			sum += atoi(argv[i]);		
			i++;
		} printf("%d\n", sum);
	}
	return (0);
}
