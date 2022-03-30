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
	int i;

	i = strlen(s);
	if (i >= '0')
	{
		_putchar(s[i]);
		i--;
		_print_rev_recursion(s - 1);
	}
	else
	{
		_putchar('\n');
	}
}
