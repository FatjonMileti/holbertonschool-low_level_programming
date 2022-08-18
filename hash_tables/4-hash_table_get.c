#include "hash_tables.h"
/**
 *hash_table_get - ...
 *@ht: ...
 *@key: ...
 *Return: ...
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *current;

	if (ht == NULL || key == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}
