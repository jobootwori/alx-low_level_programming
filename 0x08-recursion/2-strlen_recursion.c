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
		i++;
		s + 1;
	}
	else
	{
		return (i);
	}
}
