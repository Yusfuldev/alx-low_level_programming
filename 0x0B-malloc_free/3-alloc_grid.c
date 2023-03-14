#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns pointer to;2 dimensional array
 * @width: width of array
 * @height: height of array
 * Return: return a pointer to a dimensional array
 */

int **alloc_grid(int width, int height)
{
	
	int **array, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
		for (; j < width; j++)
			array[i][j] = 0;
	return (array);
}
