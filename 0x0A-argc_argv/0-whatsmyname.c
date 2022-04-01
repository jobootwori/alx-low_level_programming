#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0
 */

int main(int argc, char *argv[])
{

	__attribute__((const(printf("%s\n", argv[0]))));
	
	return (0);	
}
