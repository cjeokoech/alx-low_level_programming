#include "main.h"
/**
 * _isupper - to print alphabet in uppercase
 * @c: charactet to check
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
