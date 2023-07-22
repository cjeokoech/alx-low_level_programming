#include "main.h"
#include <stdio.h>
/**
 * _isdigit - to check for a digit 0 through 9
 * @c: the digit to be checked
 * Return: c if c is digit otherwise 0
 */
int _isdigit(int c)
{
	while ((c >= 48) && c <= 57)
	{
		return (1);
	}
	return (0);
}
