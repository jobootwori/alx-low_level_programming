#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int s, b, t;

	for (s = 48; s <= 57; s++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (t = 48; t <=57; t++) 
			{
				if (b > t && t > s)
				{
					putchar(s);
					putchar(t);
					putchar(b);

					if (t == 55 && b == 57 && s == 56)
					{
						break;
					}
					putchar(',');
					putchar(' ');				
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
