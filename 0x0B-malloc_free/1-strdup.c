#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Prints the number of argumnets
 *
 * @str: argument count
 * 
 *
 * Return: return 0
 */
char char *_strdup(char *str) 
{
	int org_size;
	static char *dup;
	char *dup_offset;

    /* Allocate memory for duplicate */
	org_size = strlen(org);
	dup = (char *)malloc(sizeof(char)*org_size+1);
	if( dup == NULL)
		return( (char *)NULL);

    /* Copy string */
	dup_offset = dup;
	while(*org)
	{
		*dup_offset = *org;
		dup_offset++;
		org++;
	}
	*dup_offset = '\0';
	
	return(dup);
}
