#include "main.h"

/**
 * puts2 - Prints a string
 *
 * @str: Input string
 *
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if((i % 2) != 0)
		{
			break;
		}
		else
		{
			continue;	
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
