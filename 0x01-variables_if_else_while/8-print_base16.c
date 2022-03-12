#include <stdio.h>
#include <ctype.h>
/**
 * main - It Prints alphabetical in lower case...
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	for (x = 65; x <= 70; x++)
	{
	/*	int lower_x = tolower(x);*/
		putchar(x);
	}
	putchar('\n');
	return (0);
}
