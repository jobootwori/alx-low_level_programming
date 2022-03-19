#include "main.h"

/**
 * print_line - prints aa straight line in the terminal
 *
 *@n: Input
 */
void print_line(int n)
{
	for ( ; n > 48; n--)
	{
		if (n <= 48)
			_putchar('\n');
		_putchar(95);
	}
	_putchar('\n');
}
