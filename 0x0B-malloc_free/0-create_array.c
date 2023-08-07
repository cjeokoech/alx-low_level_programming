#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - create array of char
 * @size: size of the array
 * @c: char to assign
 * Return: pointer or null if fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str  == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
