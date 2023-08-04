#include "main.h"
/**
 * _memcpy - copy memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of times to copy to dest
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
