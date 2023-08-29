#include "lists.h"
/**
* get_nodeint_at_index - hello
* @head: index
* @index: head
* Description: return an idnex
* Return: index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int  i = 0;

	if (!head)
		return (NULL);
	while (i <= index)
	{
		if (i == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);

}
