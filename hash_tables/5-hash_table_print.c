#include "hash_tables.h"
/**
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *current;
	short flag = 0;
	
	if (ht == NULL)
		return;
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf (", ");
			current = ht->array[i];
			while (current != NULL)
			{
				printf("'%s, %s'", current->key, current->value);
				current = current->next;
				if (current != NULL)
					printf(", ");
			}
		}
			flag = 1;
	}
		i++;

	printf("{\n");
}
