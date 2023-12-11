#include "main.h"
/**
 * _strpbrk - search a string for anny set of bytes
 * @s: the string to be searched
 * @accept: the byte being searched
 * Return: pointer to byte s that matches one in accept
 * or null if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
