#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>
/**
* print_list - print
* @h: list
* Description: print a list
*
* Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%lu] %s\n", strlen(h->str), h->str);
		count++;
		h = h->next;
	}
	return (count);
}
