#include "main.h"

/**
 * reverse_array - reverses a string
 *
 *@a: Input
 *@n: INput
 *
 */
void reverse_array(int *a, int n)
{
	int temp, start, end;
	
	end = (n - 1);

	for (start = 0; start < n; start++)
	{
		temp = a[start];
		a[start] = a[end];
		a[end--]  = temp;
	}
	_putchar('\n');
}
