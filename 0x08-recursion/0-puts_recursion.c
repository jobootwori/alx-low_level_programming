#include "main.h"

/**
 * _puts_recursion - copies a string
 *
 * @s: INput
 * 
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s != '\0')
		_puts_recursion(s + 1);
	_putchar('\n');
}
