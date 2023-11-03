#include "hash_tables.h"
/**
* hash_table_get - retrieve value of in hash table
* @ht: pointer to hash table
* @key: key of value to retrieve
* Return: value correspondding to key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *bgn;
	unsigned long int indx;

	if (ht == NULL || key == NULL)
		return (NULL);
	indx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[indx] == NULL || indx > ((ht->size) - 1))
		return (NULL);
	if (strcmp(key, ht->array[indx]->key) == 0)
		return (ht->array[indx]->value);
	bgn = ht->array[indx];
	while (bgn != NULL)
	{
		if (strcmp(key, bgn->key) == 0)
			return (bgn->value);
		bgn = bgn->next;
	}
	return (NULL);
}
