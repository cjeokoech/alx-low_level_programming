#include "main.h"
/**
 * print_binary - print binary representation of a no.
 * @n: number to be converted
 * Return: binary number
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i;
	int count;

	for (i = 33; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
