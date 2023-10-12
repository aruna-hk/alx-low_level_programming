#include "lists.h"
/**
* pop - remove item from beginning of the list
* @head: pointetr to head of the list
* Return: 1- sucess
*/
int pop(dlistint_t **head)
{
	if (*head == NULL)
		return (-1);
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	*head = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
	return (1);
}
/**
* popend - remove element from end of the list
* @head: pointer tot the hed of the list
* Return: 1- sucess
*/
int popend(dlistint_t **head)
{
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	*head = (*head)->prev;
	free((*head)->next);
	(*head)->next = NULL;
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	return (1);
}
/**
* delete_dnodeint_at_index - delete node at a give index
* @head:pointer tot the l]=head of the list
* @index: index to pop
* Return: 1-sucess / -1 failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int i;
	dlistint_t *tmp;

	if (*head == NULL)
		return (-1);
	if (index == 0)
		return (pop(head));
	i = 0;
	while ((*head)->next != NULL)
	{
		if (i == index)
		{
			tmp = (*head)->prev;
			*head = (*head)->next;
			free((*head)->prev);
			tmp->next = *head;
			(*head)->prev = tmp;
			while ((*head)->prev != NULL)
				*head = (*head)->prev;
			return (1);
		}
		i++;
		*head = (*head)->next;
	}
	while ((*head)->prev != NULL)
		*head = (*head)->prev;
	if (i == index)
		return (popend(head));
	return (-1);
}
