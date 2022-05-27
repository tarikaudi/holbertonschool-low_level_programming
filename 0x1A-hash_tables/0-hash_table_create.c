#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *hash_table_create - function that creates a hash table
 *@size: size of the array
 *Return: new hash
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = NULL;
	unsigned int i = 0;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	hash_t->array = malloc(sizeof(hash_node_t *) * size);

	if (size == 0)
		return (NULL);
	hash_t->size = size;
	if (hash_t->array == NULL)
	{
		free(hash_t);
		return (NULL);
	}

	while (i < size)
	{
		hash_t->array[i] = NULL;
		i++;
	}

	return (hash_t);
}
