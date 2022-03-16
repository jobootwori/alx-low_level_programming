#include "main.h"

/*
 * times_table - Prints 9 times timetable
 *
 */
void times_table(void)
{
	int n, k;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	
		if (n != 57)
		{
			_putchar(44);
			_putchar(' ');
			_putchar(' ');
		}
		for(k = '0'; k <= '9'; k++)
		{
			_putchar(k + 2);
			if (k != '9')
			{
				_putchar(44);
				_putchar(' ');
				_putchar(' ');
			}
		}
	}	
}
