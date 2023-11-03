#include "hash_tables.h"
/**
* hash_table_delete - free hash table
* @ht: ptr to hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;

	unsigned long int i = 0;

	if (ht == NULL)
		return;
	if (ht->size == 0)
	{
		free(ht);
		return;
	}
	while (i < (ht->size))
	{
		while (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(tmp);
		}
		free(ht->array[i]);
		i++;
	}
	free(ht->array);
	free(ht);
}
