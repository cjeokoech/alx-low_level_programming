#include "main.h"
#include <string.h>
/**
 * reverse_array - reverse array of an integer
 * @a: array of an integer
 * @n: number of array
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
