#include "main.h"
#include "_putchar.c"
void print_alphabet(void);
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
	return;
}
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
