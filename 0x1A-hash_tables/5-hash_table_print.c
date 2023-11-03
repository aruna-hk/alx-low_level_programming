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
		dprintf(STDOUT_FILENO, "{}\n");

	dprintf(STDOUT_FILENO, "{");
	while (i < (ht->size))
	{
		bgn = ht->array[i];
		if (bgn == NULL)
		{
			i++;
			continue;
		}
		if (wi != 0 && bgn != NULL)
			dprintf(STDOUT_FILENO, ", ");
		while (bgn->next != NULL)
		{
			dprintf(STDOUT_FILENO, "'%s': '%s', ", bgn->key, bgn->value);
			wi++;
			bgn = bgn->next;
		}
		dprintf(STDOUT_FILENO, "'%s': '%s'", bgn->key, bgn->value);
		wi++;
		i++;
	}
	dprintf(STDOUT_FILENO, "}\n");
}
