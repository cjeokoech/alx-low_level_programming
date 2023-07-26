#include "main.h"
/**
 * rot13 - ecode string
 * @n: the string pointer
 * Return: n
 */
char *rot13(char *n)
{
	int i;
	int j;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == data[j])
			{
				n[i] = datarot[j];
				break;
			}
		}
	}
	return (n);
}
