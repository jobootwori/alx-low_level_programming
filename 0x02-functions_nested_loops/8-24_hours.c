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
					_putchar(minute);
					_putchar(minute2);
					_putchar('\n');
					 
					if (minute2 == 57)
					{
						break;
					}
				}
				minute++;
				if (minute == 53)
					break;
			}		
		}
	}_putchar('\n');
}
