#include "lists.h"
/**
* get_dnodeint_at_index - get node at give index
* @head: pointer tot the list
* @index: index to get extract
* Return: node //NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
		{
			node = malloc(sizeof(dlistint_t));
			node->n = head->n;
			node->prev = NULL;
			node->next = NULL;
			return (node);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
