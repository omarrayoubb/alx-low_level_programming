#include "lists.h"
/**
* free_listint2 - free
* @head: head
* Description: hello worlld
*/
void free_listint2(listint_t **head)
{
	listint_t *x = *head;

	if (!head)
		return;
	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = NULL;
		*head = x;
	}
}
