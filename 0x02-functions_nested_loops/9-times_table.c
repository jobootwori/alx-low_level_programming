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
		for(k = 0; k <= 9; k++)
		{
			result = (n * k);
			if (result <= 9)
			{
				_putchar(result + 48);
			}
			else
			{
				_putchar(result + 48);
			}
			if (k != 9)
			{
				_putchar(44);
				_putchar(' ');
				_putchar(' ');
			}
		}_putchar('\n');
	}	
}
