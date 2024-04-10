#include "search_algos.h"
/**
 * linear_search - function to search for a value in an array
 * @array: pointer to the first value of the array
 * @size: number of values in array
 * @value: number to be searched for
 * Return: value or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
