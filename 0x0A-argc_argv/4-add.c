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
	if (argc == 1)
	{
		printf("0\n");
	}
	if (argc > 1)
	{
		if (!isdigit(argv[1]) && !isdigit(argv[2]))
		{
			printf("Error\n");
			return (1);
			break;
		}
		sum = atoi(argv[1]) + atoi(argv[2]);		
		} printf("%d\n", sum);
	}
	return (0);
}
