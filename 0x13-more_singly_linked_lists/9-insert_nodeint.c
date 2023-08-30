#include "lists.h"
/**
* insert_nodeint_at_index - insert
* @head: pointer
* @idx: number
* @n: number
* Description: help me
* Return: address
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *tmp = malloc(sizeof(listint_t));
	unsigned int i = idx;

	if (!(*head))
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	while (i > 1)
	{
		i--;
		ptr = ptr->next;
	}
	if (!tmp)
		return (NULL);
	if (idx == 0)
	{
		tmp->next = *head;
		ptr->next = tmp;
		return (tmp);
	}
	tmp->next = ptr->next;
	ptr->next = tmp;
	return (tmp);
}
