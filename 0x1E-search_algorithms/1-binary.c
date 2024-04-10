#include "search_algos.h"
/**
 * binary_search - function that searches value in sorted array
 * @array: pointer to the first value in array
 * @size: number of elements in array
 * @value: the element being searched
 * Return: value or  -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searchin in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;

		if (array[1] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}
	return (-1);
}
