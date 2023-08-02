#include "main.h"
int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - to print palindrome string
 * @s: the input string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	return (check_pal(s, 0, _strlen_recursion(s) - 1));
}
/**
 * _strlen_recursion - return the lenght of string
 * @s: string to culculate lenght
 * Return: lenght of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
/**
 * check_pal - check the character recusively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: lenght of string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int check_pal(char *s, int i, int len)
{
	if (len > 0)
	{
		if (s[i] == s[len])
		{
			return (check_pal(s, i + 1, len - 1));
					}
					else if (s[i] != s[len])
					{
					return (0);
					}
					else
					{
					return (1);
					}
					}
					return (1);
}
