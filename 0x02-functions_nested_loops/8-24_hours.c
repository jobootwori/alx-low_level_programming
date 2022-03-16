#include "main.h"

/*
 * jack_bauer - Prints every minute for 24 hours
 *
 * @n:  an input from user
 *
 * Return: returns the abs. valu

 */
void jack_bauer(void)
{
	int hour = 48;

	while (hour <= 50)
	{
		int hour2 = 48;

		while (hour2 <= 51)
		{
			int minute = 48;
			
			while (minute <= 53)
			{
				int minute2 = 48;

				while (minute2 <= 57)
				{
					_putchar(hour);
					_putchar(hour2);
					_putchar(58);
					_putchar(minute);
					_putchar(minute2);
					_putchar('\n');
					if (minute2 == 57 && minute == 53 && hour2 == 51 && hour == 50)
						break;
				}
			}minute++;		
		}hour2++;
	}hour++;
	_putchar('\n');
}
