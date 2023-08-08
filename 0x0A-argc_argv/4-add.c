#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
/**
 * main - program to adds positive numbers
 * @argc: number of command line arg
 * @argv: array of command line RG
 * Return: 0 on success and 1 on Error
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (0);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
