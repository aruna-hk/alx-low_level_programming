#include "lists.h"
/**
* add_dnodeint - adde node at the beggining of doubly linked list
* @head: head of the list
* @n: value to insert
* Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	(*head)->prev = new;
	new->next = (*head);
	*head = new;
	return (new);
}
