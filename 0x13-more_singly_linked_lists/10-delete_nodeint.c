#include "lists.h"
/**
* delete_nodeint_at_index - delete node at give index
* @head: ptr to head double
* @index: index to insert
* Return:1-sucess/-1 failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t count = 0;
	size_t nodes = 0;
	listint_t *temp = *head;
	listint_t *temp2;

	if (*head == NULL)
		return (-1);
	while (temp->next != NULL)
	{
		nodes++;
		temp = temp->next;
	}
	temp = *head;
	if (index > (nodes - 1))
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		*head = NULL;
		return (1);
	}
	while (temp->next != NULL)
	{

		if (count == index - 1)
		{
			temp2 = temp->next;
			temp->next = temp2->next;
			free(temp2);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
