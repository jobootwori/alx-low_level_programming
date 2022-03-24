#include "main.h"

/**
 * string_toupper- reverses a string
 *
 *@a: Input
 *@n: INput
 *
 */
char *string_toupper(char *s)
{
	int i = 0;
	
	while(s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] + 32;	
	}
}
