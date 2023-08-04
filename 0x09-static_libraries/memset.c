#include "main.h"
/**
 * _memset - returns a pointer to the memory area
 * @s: pointer to the block of memory to fill
 * @b: the value to be set
 * @n: the number of bytes to be set to the value
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
