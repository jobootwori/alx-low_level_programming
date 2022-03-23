#include "main.h"

/**
 * *_strncpy - copies a string
 *
 *@dest: Input
 *@src: INput
 *@n: Input
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	src[k] = '\0';
	return(src);
	_putchar('\n');
}
