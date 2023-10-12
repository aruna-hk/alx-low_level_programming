#include "lists.h"
/**
* print_dlistint - print items of the list
* @h: list header
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (1);
	while (h != NULL)
	{
		dprintf(STDOUT_FILENO, "%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
