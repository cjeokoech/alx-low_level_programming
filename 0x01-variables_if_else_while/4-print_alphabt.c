#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* main - Print alphabet except q and e
*
* Description: The program description
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i <= 26; i++)
{
if (i !=5 && i != 17)
{
putchar(alp[i]);
}
}
return (0);
}
