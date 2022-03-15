#include "main.h"

/*
 * main - main entry
 * return: always 0
 */
void print_alphabet(void)
{
	int a = 97;

	while (a < 123)
	{
		_putchar(a);
		a++;
		if (a == 123)
			break;
	}
	_putchar('\n');
	return;
}
