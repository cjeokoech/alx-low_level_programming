#include "main.h"
/**
 * _islower - to check if char is lowercase.
 * @c: is the char to be checked.
 * Return: 1 if char is lower, Otherwise 0. 
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
