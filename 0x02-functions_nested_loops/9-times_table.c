#include "main.h"

/*
 * times_table - Prints 9 times timetable
 *
 */
void times_table(void)
{
	int n, k, result;

	for (n = 1; n <= 9; n++)
	{
		_putchar('0');
		for(k = 1; k <= 9; k++)
		{
			result = n * k;
			_putchar(result);
			if (k != 9)
			{
				_putchar(44);
				_putchar(' ');
				_putchar(' ');
			}
		}_putchar('\n');
	}	
}
