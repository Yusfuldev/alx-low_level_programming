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
	int **ar, i = 0, j = 0;

	if (height <= 0 || width <= 0)
		return (NULL);
	ar = (int **) malloc(sizeof(int *) * height);
	for (; i < width; i++)
	{
		ar[i] = (int *) malloc(sizeof(int) * width);
	}
	for (; i < height; i++)
	{
		for (; j < width; j++)
			ar[i][j] = 0;
	}
	return (ar);
}
