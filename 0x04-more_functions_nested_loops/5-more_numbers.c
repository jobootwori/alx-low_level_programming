#include "main.h"

/**
 * more_numbers - prints digits 0 - 9
 *
 */
void more_numbers(void)
{
	int c, n;

	for (c = 1; c <= 10; c++)
	{
		for (n =0; n <= 14; n++)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
