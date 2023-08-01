#include "lists.h"
/**
* pop_listint -remove 1st node of the list
* @head: pointer to the list
* Return: ptr to new head
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temp = *head;
	*head = temp->next;
	free(temp);
	return (n);
}
