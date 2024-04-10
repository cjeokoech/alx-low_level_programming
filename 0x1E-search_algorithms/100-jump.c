#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function to search value in sorted array
 * @array: pointer to the first element in array
 * @size: number of the element in array
 * @value: the value to be searched
 * Return: value or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int k, m, index, prev;

	if (array == NULL || size == 0)
		return (-1);
	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);
	printf("Value found between indexes[%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
