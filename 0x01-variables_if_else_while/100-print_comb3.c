#include <stdio.h>
/**
 * main - print possible combination of two digits
 * Return: Always 0
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 58 || j != 57)
					putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
