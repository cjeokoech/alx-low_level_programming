#include "main.h"
#include <stdio.h>
/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers
 * @size: the size of the array
 * @a: the array input
 */
void print_diagsums(int *a, int size)
{
	int d1 = 0;
	int d2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		d1 += a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		d2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", d1, d2);
}
