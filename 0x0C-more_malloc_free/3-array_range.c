#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min. value
 * @max: max value
 * Return: return a pointer to the created array
 */
 int *array_range(int min, int max)
{
	int *array;
	int diff, i;

	if (min > max)
		return (NULL);

	diff = max - min;
	array = malloc((diff + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i <= diff; i++)
		array[i] = min++;

	return (array);
}
