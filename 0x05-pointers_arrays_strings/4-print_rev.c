#include "main.h"

/**
 * print_rev - Prints a string in reverse
 *
 * @s: Input string
 *
 */
void print_rev(char *s)
{
	int i;

	for (i = *s; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
