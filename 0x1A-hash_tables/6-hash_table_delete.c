#include "hash_tables.h"
/**
* free_list - frees linked list
* @head: list ptr
*/
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head->key);
		free(head->value);
		free(head);
		head = temp;
	}
}
/**
* hash_table_delete - free hash table
* @ht: ptr to hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;
	while (i < (ht->size))
	{
		free_list(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
