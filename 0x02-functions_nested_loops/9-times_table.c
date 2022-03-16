#include "main.h"

/*
 * times_table - Prints 9 times timetable
 *
 */
void times_table(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 57)
			break;
		_putchar(n);
		_putchar(' ');
	}
}
