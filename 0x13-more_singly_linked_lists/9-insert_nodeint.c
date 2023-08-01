#include "lists.h"
/**
* insert_nodeint_at_index - insert node at give index
* @head: ptr to head double
* @idx: index to insert
* @n: value to insert at the give node
* Return:address of new node/NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	unsigned int count = 0;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head == NULL || *head == NULL)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (temp);
		}
		count++;
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
