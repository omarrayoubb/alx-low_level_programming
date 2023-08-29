#include "lists.h"
/**
* print_listint - print
* @h: pointer
* Description: print list int
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%lu\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
