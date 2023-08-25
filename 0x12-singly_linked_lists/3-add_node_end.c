#include "lists.h"
/**
* add_node_end - adding nodes
* @head: pointer
* @str: string
* Description: add some nodes
* Return: address of the newest element or NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (!str || !ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (!(*head))
	{
		*head = ptr;
		return (ptr);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = ptr;
	return (ptr);
}
