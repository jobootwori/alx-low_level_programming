#include "main.h"

/**
 * string_toupper- reverses a string
 *
 *@s: Input
 *
 *
 */
char *string_toupper(char *s)
{
	int i = 0;
	
	while(s[i] != '\0')
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			s[i] = (s[i] + 32);
		}	
	}
	_puchar('\n');
}
