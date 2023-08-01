#include "lists.h"
/**
* reverse_listint - reverse the linked list
* @head: head ptr to existing list
* Return: ptr to list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *prev = NULL;
	listint_t *next;

	if (*head == NULL)
		return (NULL);
	while (tempptr->next != NULL)
	{
		next = temp->next;
		tempptr->next = prev;
		prev = temp;
		temp = next;
	}
	*head = prev;
	return (*head);
}
