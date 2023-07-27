#include "lists.h"
/**
* list_len - find the number of nodes--len
* @h: list
* Return: len os list
*/
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
