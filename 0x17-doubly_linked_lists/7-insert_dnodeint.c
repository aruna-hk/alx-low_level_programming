#include "lists.h"
/**
* insertidx - insert value at a give index
* @h: pointer to head pof the list
* @n: data to insert
* Return: inserted node
*/
dlistint_t *insertidx(dlistint_t **h, int n)
{
	dlistint_t *insert;

	insert = malloc(sizeof(dlistint_t));
	if (insert == NULL)
		return (NULL);
	insert->n = n;
	insert->next = *h;
	insert->prev = (*h)->prev;
	(*h)->prev->next = insert;
	(*h)->prev = insert;
	while ((*h)->prev != NULL)
		*h = (*h)->prev;
	return (insert);
}
/**
* insert_dnodeint_at_index - insert node at a given index
* @h: head of the list
* @idx: index to insert
* @n: data
* Return: added node /NULL if failure
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	int i;

	if (*h == NULL || idx == 0)
		return (add_dnodeint(h, n));
	i = 0;
	while ((*h)->next != NULL)
	{
		if (i == idx)
		{
			return (insertidx(h, n));
		}
		i++;
		*h = (*h)->next;
	}
	if (idx == i)
		return (insertidx(h, n));
	while ((*h)->prev != NULL)
		*h = (*h)->prev;
	if (i + 1 == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
