#include "lists.h"
/**
* dlistint_len - count the number of items in list
* @h: head of the list
* Return: no of items in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (i);
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
