#include "main.h"

/**
 * ring_toupper- reverses a string
 *
 *@s: Input
 *
 *Return: Returns answer
 */
char *cap_string(char *)
{
	int i=0;

	while(s[i] != '\0')
	{
		if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
		++i;
	}
	return (s);
}
