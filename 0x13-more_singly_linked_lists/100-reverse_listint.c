#include "lists.h"
/**
* reverse_listint - reverse the linked list
* @head: head ptr to existing list
* Return: ptr to reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while ((*head) != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (*head);
}
