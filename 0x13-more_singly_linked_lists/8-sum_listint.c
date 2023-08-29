#include "lists.h"
/**
* sum_listint - sum
* @head: pointer
* Description: welcomeeeee
* Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
