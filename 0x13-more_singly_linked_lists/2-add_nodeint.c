#include "lists.h"
/**
* add_nodeint - add node at the beggining of the list
* @head: ptr to the head of the list
* @n: nterger number to be inserted in the new node
* Return: null is malloc fails,, ptr to new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (*head);
	}
	new->next = *head;
	*head = new;
	return (*head);
}
