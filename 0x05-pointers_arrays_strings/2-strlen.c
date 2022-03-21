#include "main.h"

/**
 * _strlen - Swaps the values of two integers
 *
 * @s: Input Integer
 * Return: returns i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s[i] != '\0'; ++i);
	_putchar(i);

	return (i);
}
