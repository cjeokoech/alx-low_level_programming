#include "main.h"
/**
 * get_bit - function that returns the value
 * of a bit at a given index.
 * @n: bit given
 * @index: search for index of n
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 33)
	{
		return (-1);
	}
	value = (n >> index) & 1;
	return (value);
}

