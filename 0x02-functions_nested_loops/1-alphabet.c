#include "main.h"
#include "_putchar.c"
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
int main()
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
