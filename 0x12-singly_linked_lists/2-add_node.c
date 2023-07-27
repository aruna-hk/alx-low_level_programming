#include "lists.h"
/**
* add_node - add node ata the beginning
* @head: pointer to a pointer points to list
* @str: -string to add to string variable in struct
* Return: return null/pointer to addd node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	newnode->next = *head;
	*head = newnode;
	return (*head);
}
