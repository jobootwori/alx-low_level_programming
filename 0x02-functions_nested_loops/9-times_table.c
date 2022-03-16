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
		_putchar(n);
		_putchar(44);
		_putchar(' ');
		_putchar(' ');
		if (n == 58)
			break;
	}
}
