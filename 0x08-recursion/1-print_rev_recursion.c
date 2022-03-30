#include "main.h"
#include <string.h>

/**
 *  _print_rev_recursion - copies a string
 *
 * @s: INput
 *
 */
void _print_rev_recursion(char *s)
{
	*s = strrev(s);
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
	else
	{
		_putchar('\n');
	}
}
