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
	listint_t *temp = temp;
	unsigned int count = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		if (idx == 0)
		{
			new->next = *head;
			*head = new;
			return (new);
		}
		else
			return (NULL);
	}
	if (idx == 0 && *head != NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp != NULL)
	{

		count++;
		if (count == idx)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
	}
	free(new);
	return (NULL);
}
