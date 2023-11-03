#include "hash_tables.h"
/**
* hash_table_get - retrieve value of in hash table
* @ht: pointer to hash table
* @key: key of value to retrieve
* Return: value correspondding to key
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[indx] == NULL)
		return (NULL);
	return (ht->array[indx]->value);
}
