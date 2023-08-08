#include <stdio.h>
/**
 * main - to print all its arguments it received
 * @argc: numbr of command line argument
 * @argv: array of command line argument
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
