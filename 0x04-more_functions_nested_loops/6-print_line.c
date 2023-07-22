#include "main.h"
/**
 * print_line - to draw a straight line
 * @n: the number of character _ to be printed
 * Return: return n
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
