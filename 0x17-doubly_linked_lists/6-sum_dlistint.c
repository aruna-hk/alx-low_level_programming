#include "lists.h"
/**
* sum_dlistint - sum list elements
* @head: head of the lists pointer
* Return: sum of elements in the list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
