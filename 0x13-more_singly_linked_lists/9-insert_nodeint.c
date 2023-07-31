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
	size_t count = 0;
	listint_t *temp = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
		}

		count++;
		temp = temp->next;
	}

	return (NULL);
}
