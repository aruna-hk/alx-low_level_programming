#include "lists.h"
/**
* pop_listint -remove 1st node of the list
* @head: pointer to the list
* Return: ptr to new head
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	if ((*head)->next == NULL)
		*head = NULL;
	else
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	return (n);
}
