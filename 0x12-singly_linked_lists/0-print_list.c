#include "lists.h"
/**
* _strlen - check string legthn
* @s: pointer to array of chaacters
* Return: len-length of the string
*/
size_t _strlen(char *s)
{
	size_t len = 0;

	while (*s != '\0')
	{
		len = len + 1;
		s++;
	}
	return (len);
}

/**
 * print_list - print content of linked list and
 * return the number of nodes
 * @h: list pinter
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t len;
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if ((h->str) == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			len = _strlen(h->str);
			printf("[%lu] %s\n", len, h->str);
		}
		nodes++;
		h = h->next;
	}
	return (nodes);
}
