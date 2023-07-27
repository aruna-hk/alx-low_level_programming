#include "lists.h"
/**
* add_node_end - add node to the end of the list
* @head: pointer to lists head
* @str: string to insert into sruct
* Return: NULL -failure lpointer == sucess
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = *head;
	list_t *end_add = malloc(sizeof(list_t));

	if (end_add == NULL)
		return (NULL);
	if (*head == NULL)
	{
		end_add->str = strdup(str);
		end_add->len = strlen(str);
		end_add->next = NULL;
		*head = end_add;
		return (*head);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = end_add;
	end_add->str = strdup(str);
	end_add->len = strlen(str);
	end_add->next = NULL;
	return (*head);
}
