#include "lists.h"
/**
* sum_listint - sum data in list
* @head: - head of the list
* Return: sum of list elements/0 - if empty
*/
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp->next != NULL)
	{
		sum += (temp->n);
		temp = temp->next;
	}
	sum += (temp->n);
	return (sum);
}
