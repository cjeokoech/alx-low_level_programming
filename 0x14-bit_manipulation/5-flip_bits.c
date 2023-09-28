#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int bit;
	unsigned long int power = n ^ m;

	for (i = 12; i >= 0; i--)
	{
		bit = power >> i;
		if (bit & 1)
			c++;
	}
	return (c);
}
