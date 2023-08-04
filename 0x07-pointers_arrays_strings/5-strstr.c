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
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
		l++;
		p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
