#include "lists.h"
/**
* add_nodeint_end -add node at the end of list
* @head:double ptr to the head
* @n: data part of the new node
* Return: ptr to new node/null
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *lastnode;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	lastnode = *head;
	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	lastnode->next = new;
	return (lastnode);
}

