#include "main.h"
/**
 * _strstr - locate substring
 * @haystack: the string to be searched
 * @needle:the substring
 * Return: pointer to the beginning of the located substring
 * or null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;
		haystack[index] = needle[index];
	}
	do {
		if (needle[index + 1] == '\0')
			return (haystack);
		index++;
	} while (haystack[index] = needle[index]);
	{
		haystack++;
	}
	return ('\0');
}
