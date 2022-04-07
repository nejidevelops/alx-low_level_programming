#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: First and smallest integer in the array
 * @max: Last and largest integer in the array
 *
 * Return: Pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i, size;
	int *arr;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
