#include "lists.h"
/**
* listint_len - return numbere of elements in list
* @h: head ptr
* Return: 0 if empty, elements if not empty
*/
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
		return (elements);
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
