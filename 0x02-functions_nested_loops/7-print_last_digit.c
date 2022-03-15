#include "main.h"

/*
 * print_last_digit - a function that computes the absolute
 * value of an integer.
 *
 * @n:  an input from user
 *
 * Return: returns the abs. value
 *
 */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
	_putchar('\n');
}
