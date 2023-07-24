#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int j;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (j = longi; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
