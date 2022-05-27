#include "hash_tables.h"

/**
*hash_table_print - hash create
*@ht: size
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, idex, flag = 0;
	hash_node_t *temp;

	if (!ht)
		return;
	printf("{");
	size = ht->size;
	for (idex = 0; idex < size; idex++)
	{
		temp = ht->array[idex];
		while (temp)
		{
			if (idex != 0 && flag == 1)
				printf(", ");
			flag = 1;
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
		}
	}
	printf("}\n");
}
