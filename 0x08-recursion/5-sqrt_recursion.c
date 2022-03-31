#include "main.h"

int initial_sqrt_recursion(int i, int j);

/**
 *  _sqrt_recursion - return the square root of a number
 *
 * @n: INput
 * 
 * Return: return result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (initial_sqrt_recursion(n, 0));
}
/**
 * initial_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @i: number to calculate the sqaure root of
 * @j: iterator
 *
 * Return: the resulting square root
 */
int initial_sqrt_recursion(int i, int j)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (initial_sqrt_recursion(i, j + 1));
}
