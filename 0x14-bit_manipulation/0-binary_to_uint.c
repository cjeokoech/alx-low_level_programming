#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint -  function that converts a binary
 * number to an unsigned int
 * @b: string containing binary numbers
 * Return: converted number or 0 on fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int results = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
			results = 2 * results + (b[i] - '0');
		}
	}
	return (results);
}
