#include "hash_tables.h"
/**
 * create_node - function to create node
 * @key: key
 * @value: value of key in hash table
 * Return: node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *newnode;

	newnode = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (newnode == NULL)
		return (NULL);
	newnode->key = strdup(key);
	newnode->value = strdup(value);

	if (newnode->key == NULL || newnode->value == NULL)
		free(newnode->key);
	free(newnode->value);
	free(newnode);
	return (NULL);

	newnode->next = NULL;
	return (newnode);
}
/**
 * _insert - function to insert value to node
 * @ht: hash table to insrt the value
 * @key: key
 * @value: value to update
 * Return: 1
 */
int _insert(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *current;
	hash_node_t *newnode;

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);

			if (current->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		current = current->next;
	}
	newnode = create_node(key, value);

	if (newnode == NULL)
	{
		return (0);
	}
	newnode->next = ht->array[index];
	ht->array[index] = newnode;
	return (1);
}
/**
 * hash_table_set -  function to set value at hash table
 * @key: key
 * @ht: hash table to insert the value
 * @value: element to be inserted to hash table
 * Return: 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	return (_insert(ht, key, value));
}
