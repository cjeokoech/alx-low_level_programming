#include "main.h"
#include <stdio.h>
/**
 * _isupper - check for uppercase character
 * @c: to check for uppercase character
 * Return: 1 if c is uppercase otherwise 0
 */
int _isupper(int c)
{
	while ((c >= 65) && c <= 90)
	{
		return (1);
	}
	return (0);
}
