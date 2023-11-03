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
	hash_node_t *new;
	unsigned long int idx;
	const unsigned char *k = (const unsigned char *) key;

	idx = key_index(k, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	if (ht->array[idx] == NULL)
		ht->array[idx] = new;
	else
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}
	return (1);
}
