#include "main.h"

/**
 * _memset - fills memory wit a constant byte
 *
 * @s: pointer to destination object
 * @b: Value to be filled
 * @n: number of bytes to be filled from s to be filled
 * Return: return result
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = s;

	while (n--)
	{
		*p++ = (unsigned char) b;
	}
	return (s);
}
