#include "hash_tables.h"
/**
* hash_table_set - add value to the hash  table
* @ht: pointer to hash table
* @key: key to determine the index at which the value is to e stored
* @value: value to store in table
* Return: 1 if sucess 0 - if faiure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *bgn;
	unsigned long int idx;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	if (idx > ((ht->size) - 1))
		return (0);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = malloc(sizeof(hash_node_t));
		ht->array[idx]->key = strdup(key);
		ht->array[idx]->value = strdup(value);
		ht->array[idx]->next = NULL;
		return (1);
	}
	bgn = ht->array[idx];
	while (ht->array[idx] != NULL)
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(value);
			ht->array[idx] = bgn;
			return (1);
		}
		ht->array[idx] = ht->array[idx]->next;
	}
	ht->array[idx] = bgn;
	new = malloc(sizeof(hash_node_t));
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
