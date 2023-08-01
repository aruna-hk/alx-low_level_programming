#include "lists.h"
/**
* pop_listint -remove 1st node of the list
* @head: pointer to the list
* Return: popped item;
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
		return (0);

	n = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (n);
}

