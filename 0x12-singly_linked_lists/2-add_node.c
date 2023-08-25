#include "lists.h"
/**
* add_node - adding nodes
* @head: pointer
* @str: string
* Description: add some nodes
* Return: address of the newest element or NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

	if (!head || !str)
		return (NULL);

	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
