#include "lists.h"
/**
* add_dnodeint_end - add node at the end of the list
* @head: pointer to head of the list
* @n: value to insert
* Return: added node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while ((*head)->next != NULL)
		(*head) = (*head)->next;
	(*head)->next = new;
	new->prev = *head;
	while ((*head)->prev != NULL)
		(*head) = (*head)->prev;
	return (new);
}
