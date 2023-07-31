#include "lists.h"
/**
* free_listint2 - free list
* @head: double ptr to list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		free(head);
		return;
	}
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

}
