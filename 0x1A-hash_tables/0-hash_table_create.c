#include "hash_tables.h"
/**
 * hash_table_create - create hash table
 * @size: size of the array
 * Return: 0
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *newtable;

	newtable = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (newtable == NULL)
	{
		return (NULL);
	}
	newtable->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	if (newtable->array == NULL)
	{
		free(newtable);
		return (NULL);
	}
	newtable->size = size;

	for (i = 0; i < size; i++)
	{
		newtable->array[i] = NULL;
	}
	return (newtable);
}
