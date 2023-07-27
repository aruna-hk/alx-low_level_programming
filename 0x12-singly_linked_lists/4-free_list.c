#include "lists.h"
/**
* free_list - frees linked list
* @head: list ptr
*/
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		free(head);
	}
	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}

}
