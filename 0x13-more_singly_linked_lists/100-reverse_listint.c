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
	listint_t *temp = *head;

	while (temp != NULL)
	{
		next = temp->next;
		temp->next = prev;
		prev = temp;
		temp = next;
	}
	*head = prev;
	return (*head);
}
