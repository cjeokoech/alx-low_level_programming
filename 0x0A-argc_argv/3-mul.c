#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print multiplies of two numbers
 * @argc: the number of command line arg
 * @argv: the array of command line arg
 * Return: 0 on success or 1 on Error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
