#include <stdio.h>
/**
* main - Print alphabet
*
* Description: The program description
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i;
for (i = 0; i <= 52; i++)
{
putchar(alp[i]);
}
return (0);
}