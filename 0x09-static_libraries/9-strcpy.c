#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int k = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for (; k < i; k++)
	{
		dest[k] = src[k];
	}
	dest[i] = '\0';
	return (dest);
}
