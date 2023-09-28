#include "main.h"
#include <stddef.h>
/**
 * get_bit - return the bet at a given index
 * @n: number to search
 * @index: index of bit
 * Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 12)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
