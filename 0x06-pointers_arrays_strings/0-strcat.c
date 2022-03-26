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

	k, i = 0;

	while (dest[k] != '\0')
		k++;	
	while (src[i] != '\0')
	{
		dest[k] = src[i];
		i++;
		k++;
	}
	dest[i] = '\0';
	return(dest);
}
