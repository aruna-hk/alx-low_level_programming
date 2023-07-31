#include "lists.h"
/**
* get_nodeint_at_index - get specified node and return ptr to it
* @head: ptr to ead of the list
* @index: node to get
* Return: ptr to wanted node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	size_t count = 0;

	if (head == NULL)
		return (NULL);
	while (temp->next != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
