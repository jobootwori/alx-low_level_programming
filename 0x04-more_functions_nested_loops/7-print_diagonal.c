#include "main.h"

/**
 * print_diagonal - prints a diagonal line on the terminal
 *
 *@n: Input
 */
void print_diagonal(int n)
{
	int k, m;

	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
	for (k = 0; k < n; k++)
	{
		for (m = 0; m < k; m++)
		{	
			_putchar(92);
		}
	}
	}
	_putchar('\n');
}
