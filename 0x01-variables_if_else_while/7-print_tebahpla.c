#include <stdio.h>
/**
* main - Print alphabets in lowercase
* followed by a new line
* Description: The program description
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
