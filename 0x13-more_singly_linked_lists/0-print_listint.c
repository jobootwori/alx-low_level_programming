#include "lists.h"
#include <stdio.h>
**
 * print_listint - prints all the elements of a list
 * @h: the head of the list to print from
 * Return: the number of nodes
 */
 size_t print_listint(const listint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		printf(" %d ", h->n):
		h = h->next;
		counter++;
	}
	return (counter);
}
