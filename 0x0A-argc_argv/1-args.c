#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: the number of command line argument
 * @argv: array cointainint command line arg
 * Return: 0 on success
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
