#include "main.h"
/**
 * set_bit - seet a value of bit to 1 at
 * a given index
 * @n: pointer to given bit
 * @index: index of the bit
 * Return: 1 or 0 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 33)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
