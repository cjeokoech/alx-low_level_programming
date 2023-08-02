#include "main.h"
/**
 * _strlen_recursion - return lenght of a string
 * @s: the input string
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	int longi = 0;

	if (*s)
	{
		longi++;
		longi += _strlen_recursion(s + 1);
	}
	return (longi);
}
