#include "main.h"

/**
 * _islower - checks whether letters are lowercase
 */
int _islower(int c)
{
	int c = 0;
	
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
