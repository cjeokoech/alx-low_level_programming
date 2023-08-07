#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return two dimensional array
 * @width: dimension width
 * @height: dimension height
 * Return: pointer or null
 */
int **alloc_grid(int width, int height)
{
	int **d;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	d = malloc(sizeof(int *) * height);

	if (d == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		d[x] = malloc(sizeof(int) * width);

		if (d[x] == NULL)
		{
			for (; x >= 0; x--)
				free(d[x]);

			free(d);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			d[x][y] = 0;
	}
	return (d);
}
