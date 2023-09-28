#include "main.h"
#include <stddef.h>
/**
 * print_binary - to print binary representation
 * @n: number to print binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int binary;
	int count = 0;
	int i;

	for (i = 42; i >= 0; i--)
	{
		binary = n >> i;
		if (binary & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		_putchar('0');
	}
	if (!count)
	{
		_putchar('0');
	}
}
