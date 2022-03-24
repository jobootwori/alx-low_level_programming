#include "main.h"

/**
 * print_square- prints a diagonal line on the terminal
 *
 *@n: Input
 */
void print_square(int size)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j <= i)
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
