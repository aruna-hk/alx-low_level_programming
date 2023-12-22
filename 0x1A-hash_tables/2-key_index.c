#include "hash_tables.h"

/**
* key_index - compute the index of a key in array table
* @key: hashcode to index
* @size: table size
* Return: index to be to insert hhey value in hash table
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
