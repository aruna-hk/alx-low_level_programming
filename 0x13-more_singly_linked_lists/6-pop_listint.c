#include "lists.h"
/**
* pop_listint -remove 1st node of the list
* @head: pointer to the list
* Return: popped item;
*/
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (head == NULL || *head != NULL)
	{
		return (0);
	}
	else
	{
		n = (*head)->n;
		temp = *head;
		(*head) = (*head)->next;
		free(temp);
		return (n);
	}
	return (0);
}
