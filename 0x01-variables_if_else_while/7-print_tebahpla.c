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
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
