#include "lists.h"
/**
* free_dlistint - free ldoubly linked list
* @head: pointer to the head of th list
*/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
