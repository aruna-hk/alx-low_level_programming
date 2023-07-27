#include "lists.h"
/**
* free_list - frees linked list
* @head: list ptr
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
