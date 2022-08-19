#include "hash_tables.h"
/**
 * hash_table_delete - ...
 * @ht: ...
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *next;
	unsigned int i;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				next = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = next;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
