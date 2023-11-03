#include "hash_tables.h"
/**
* hash_table_create - function to create a hash tale
* @size: size of hash tale to create
* Return: created hash table if success  or NULL if failure
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **) calloc(size, sizeof(hash_node_t *));
	return (table);
}
