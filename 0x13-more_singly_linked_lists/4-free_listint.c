#include "lists.h"
/**
* free_listint -- free list ptr to list
* @head: ptr to list
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		free(head);
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
