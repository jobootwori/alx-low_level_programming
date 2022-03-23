#include "main.h"

/**
 * *_strcat - appends a string to another
 *
 *@dest: Input
 *@src: INput
 */
char *_strcat(char *dest, char *src)
{
	int k, i;

	for (k = 0; dest[k] != '\0'; k++)
	
	for (i = 0; src[i] != '\0'; i++, k++)
	{
		dest[k] = src[i];
	}
	return(dest[k]);
	_putchar('\n');
}
