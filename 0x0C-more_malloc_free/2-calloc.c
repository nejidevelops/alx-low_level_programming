#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element on the array
 *
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	s = arr;
	for (i = 0; i < (size * nmemb); i++)
		s[i] = 0;
	return (arr);
}
