#include <stdio.h>
#include <stdlib.h>
/**
* main - Print alphabet
*
* Description: The program description
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int n;
for (n = 0; n <= 26; n++)
{
putchar(alp[n]);
}
putchar(n);
return (0);
}
