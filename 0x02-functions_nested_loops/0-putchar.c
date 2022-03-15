#include <unistd.h>
/*
 * main - Prints _putchar
 * putchar - Prints characters
 */

void _putchar(char c)
{
/*
 * Prints Characters
 */
	(void) write(1, &c, 1);
	return;
}
int main(void)
{
/*
 * calls putchar to print characters
 */
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
