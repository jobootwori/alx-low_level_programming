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
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			
		}_putchar('\n');
	}	
}
