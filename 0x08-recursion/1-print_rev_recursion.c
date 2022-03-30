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
	i--;
	if (i >= '0')
	{
		_putchar(s[i]);
		_print_rev_recursion(s - 1);
	}
	else
	{
		_putchar('\n');
	}
}