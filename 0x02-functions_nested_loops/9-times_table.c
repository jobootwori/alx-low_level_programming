#include "main.h"

/**
 * times_table - Prints 9 times timetable
 *
 */
void times_table(void)
{
	int n, k, result;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (k = 1; k <= 9; k++)
		{
			result = (n * k);
			
			if (result <= 9 && result != 0)
			{
				_putchar(44);
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');

			}
			else
			{
				_putchar(44);
				_putchar(' ');
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			
		}
		_putchar('\n');
	}	
}
