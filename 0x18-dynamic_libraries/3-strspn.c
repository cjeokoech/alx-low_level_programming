#include "main.h"
/**
 * _strspn - get the lenght of prefix substring
 * @s: the string to be searched
 * @accept: the prefix to be measured
 * Return: the number of byte in initial segment of s
 * which consist only of byte accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				byte++;
				break;
			}
			else
				if (accept[index + 1] == '\0')
					return (byte);
		}
		s++;
	}
	return (byte);
}
