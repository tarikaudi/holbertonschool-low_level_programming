#include "hash_tables.h"

/**
 * hash_table_get - create
 * @ht: size
 * @key: key
 * Return: return
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idex, size;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);
	size = ht->size;
	idex = hash_djb2((const unsigned char *)key) % size;
	temp = ht->array[idex];
	while (temp)
	{
		if (strcmp((temp->key), ((char *)key)) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
