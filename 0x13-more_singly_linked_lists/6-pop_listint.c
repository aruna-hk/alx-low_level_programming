#include "lists.h"
/**
* pop_listint -remove 1st node of the list
* @head: pointer to the list
* Return: ptr to new head
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int np;

	if (head == NULL)
	{
		return (0);
	}
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		np = (*head)->n;
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	return (np);
}
