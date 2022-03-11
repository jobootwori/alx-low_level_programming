#include <stdio.h>
/**
 * main - It Prints alphabetical in lower case...
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		int lower_x = tolower(x); 
		putchar(lower_x);
	}
	return (0);
}
