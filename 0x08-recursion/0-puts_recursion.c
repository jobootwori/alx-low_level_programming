#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: Input
 * @src: INput
 * @n: Input
 * Return: returns dest
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] != '\0')
		_putchar(s[i]);
	i++;
	_puts_recursions(s);
}
