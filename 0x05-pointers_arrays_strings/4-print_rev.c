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

	for (i = s; str[i] != '\0'; --i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
