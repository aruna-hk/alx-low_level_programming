#include "lists.h"
/**
* pop_listint -remove 1st node of the list
* @head: pointer to the list
* Return: ptr to new head
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return ((*head)->n);
}