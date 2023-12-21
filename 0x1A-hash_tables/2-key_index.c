#include "hash_tables.h"
/**
 * key_index -  function that gives you the index of a key
 * @key: key of hash table
 * @size:sizeof array
 * Return: 0
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;
	unsigned long int index;

	value = hash_djb2(key);
	index = value % size;
	return (index);
}
