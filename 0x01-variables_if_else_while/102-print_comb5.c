#include <stdio.h>

/**
 * main - prints all possible different combinations of two two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int a, b, c, d;
	
	for (a = 48; a < 58; a++)
	{
		puchar(a);
		for (b = 48; b <= 57; b++)
		{
			putchar(b);
			for (c = 48; c <= 57; c++)
			{
				putchar(' ');
				putchar(c);
				for (d = 48; d < 58; d++)
				{
					putchar(d)
					if (a > b && c == d)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
