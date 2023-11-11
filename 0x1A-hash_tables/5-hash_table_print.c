#include "hash_tables.h"
/**
* hash_table_print - diplay records in hash table
* @ht: hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *bgn;
	unsigned long int i = 0;
	int wi = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (i < (ht->size))
	{
		bgn = ht->array[i];
		if (bgn == NULL)
		{
			i++;
			continue;
		}
		if (wi != 0 && bgn != NULL)
			printf(", ");
		while (bgn->next != NULL)
		{
			printf("'%s': '%s', ", bgn->key, bgn->value);
			wi++;
			bgn = bgn->next;
		}
		printf("'%s': '%s'", bgn->key, bgn->value);
		wi++;
		i++;
	}
	printf("}\n");
}
