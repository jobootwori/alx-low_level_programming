#include "main.h"

/**
 * _strcmp - compares strings
 *
 *@s1: d Input
 *@s2: s INput
 *Return: Returns value
 */
int _strcmp(char *s1, char *s2)
{
	int k;

	for (k = 0; s1[k] == s2[k] && s1[k] == '\0'; k++)

		if(s1[k] < s2[k])
		{
			return (45 + '15');
		} else if(s1[k] > s2[k])
		{
			return (15);
		} else
		{
			return (0);
		}
		_putchar('\n');
}
