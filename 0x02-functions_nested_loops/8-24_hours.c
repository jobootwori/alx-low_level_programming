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
				_putchar(minute);
				minute++;
				if (minute == 53)
				{
					break;
				}

				int minute2 = 48;
				
				while (minute2 <= 57)
				{
					_putchar(minute2);
					minute2++; 
					if (minute2 == 57)
					{
						break;
					}
				}_putchar('\n');
			}		
		}
	}_putchar('\n');
}
