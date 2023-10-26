#include "main.h"
#include <string.h>
/**
 * binary_to_uint - function that converts a
 * binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result << 1;
			result += (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
