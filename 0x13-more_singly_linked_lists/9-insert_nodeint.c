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
/**
* insert_nodeint_at_index - insert node at give index
* @head: ptr to head double
* @idx: index to insert
* @n: value to insert at the give node
* Return:address of new node/NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t pos = 0;
	size_t nodes = 0;
	listint_t *temp = *head;
	listint_t *newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		return (NULL);
	while (temp != NULL)
	{
		nodes++;
		temp = temp->next;
	}
	temp = *head;
	if (idx == 0)
		return (add_nodeint(head, n));
	if (nodes == (idx))
		return (add_nodeint_end(head, n));
	while (temp != NULL)
	{
		if (pos == (idx - 1))
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (temp);
		}
		pos++;
		temp = temp->next;
	}
	return (NULL);
}
