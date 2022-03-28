#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination address
 * @src: source address
 * @n: number of bytes to be filled from s to be filled
 * Return: return result
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* Typecast src and dest addresses to (char *) */
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	/* Copy contents of src[] to dest[] */
	for (int i = 0; i < n; i++)
	{
		cdest[i] = csrc[i];
	}
	return (dest);
}
