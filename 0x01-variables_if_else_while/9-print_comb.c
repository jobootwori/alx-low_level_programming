#include <stdio.h>
#include <ctype.h>
/**
 * main - It the main function ...
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		putchar('\t');
	}
	putchar('\n');
	return (0);
}
