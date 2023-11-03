#include "hash_tables.h"
/**
* search_add - search if key already present
* @ht: hash table ptr
* @new: new node to add to hash table
* @idx: index of hash tble to search
*/
void search_add(hash_table_t *ht, hash_node_t *new, unsigned long int idx)
{
	hash_node_t *bgn = ht->array[idx];

	while (ht->array[idx]->next != NULL)
	{
		if (strcmp(ht->array[idx]->key, new->key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(new->value);
			free(new->key);
			free(new->value);
			free(new);
			ht->array[idx] = bgn;
			return;
		}
		ht->array[idx] = ht->array[idx]->next;
	}
	if (strcmp(ht->array[idx]->key, new->key) == 0)
	{
		free(ht->array[idx]->value);
		ht->array[idx]->value = strdup(new->value);
		free(new->key);
		free(new->value);
		free(new);
		ht->array[idx] = bgn;
		return;
	}
	ht->array[idx] = bgn;
	new->next = ht->array[idx];
	ht->array[idx] = new;
}
/**
* hash_table_set - add value to the hash  table
* @ht: pointer to hash table
* @key: key to determine the index at which the value is to e stored
* @value: value to store in table
* Return: 1 if sucess 0 - if faiure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int idx;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	idx = key_index((const unsigned char *) key, ht->size);
	if (idx > ((ht->size) - 1))
		return (0);
	new = malloc(sizeof(hash_node_t));
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (ht->array[idx] == NULL)
		ht->array[idx] = new;
	else
		search_add(ht, new, idx);
	return (1);
}
