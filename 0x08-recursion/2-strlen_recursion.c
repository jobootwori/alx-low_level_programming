#include "main.h"

/**
 *  _strlen_recursion - copies a string
 *
 * @s: INput
 *
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		i++;		
	}
	return (i);
	
}
