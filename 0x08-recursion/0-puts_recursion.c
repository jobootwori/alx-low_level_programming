#include "main.h"

/**
 * _puts_recursion - copies a string
 *
 * @s: INput
 *
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
		_puts_recursion(s + 1);
	_putchar('\n');
}