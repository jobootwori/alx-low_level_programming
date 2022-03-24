#include "main.h"

/**
 * reverse_array - reverses a string
 *
 *@a: Input
 *@n: INput
 *Return: Returns value
 */
void reverse_array(int *a, int n);
{
	int k, temp, start, end;
	start = 0;
	end = (n - 1);

	while (start < end)
	{
		temp = *a[start];
		*a[start] = *a[end];
		*a[end]  = temp;
		start++;
		end--;
	}
	for (k = 0; k < n; k++)
	{
		return (*a[k]);
	}
	_putchar('\n');
}
