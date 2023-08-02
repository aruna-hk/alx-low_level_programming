#include "lists.h"
#include <stdio.h>

/**
* print_listint_safe - print the list taking care of loops in list
* @head: takes head ptr
* Return: exit with 98/ return number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *arr[1024];
	const listint_t *loop = NULL;
	const listint_t *temp = head;
	unsigned int i;
	size_t nodes = 0;

	if (head == NULL || head->next == NULL)
		return (0);
	while (temp != NULL)
	{
		for (i = 0; i < nodes; i++)
		{
			if (arr[i] == temp)
			{
				loop = temp;
				break;
			}
		}
		if (loop == NULL)
		{
			printf("[%p] %d\n", (void *) temp, temp->n);
			nodes++;
			arr[nodes] = temp;
		}
		else
		{
			printf("->   [%p] %d \n", (void *) temp, loop->n);
			break;
		}
		temp = temp->next;
	}
	return (nodes);
	exit(98);
}
