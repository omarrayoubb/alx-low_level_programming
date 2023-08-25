#include "lists.h"
/**
* free_list - free
* @head: singly linked lists* Description: Free all single lists
*
*/
void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
