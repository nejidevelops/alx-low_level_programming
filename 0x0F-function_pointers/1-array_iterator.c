#include "function_pointers.h"

/**
 * array_iterator - Exectutes a function given as a parameter on each element
 * @array: Array onto which function should execute
 * @size: Size of array
 * @action: Pointer to function to be executed
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	for (index = 0; index < size; index++)
	{
		if (array == NULL || action == NULL)
			return;
		action(array[index]);
	}
}
