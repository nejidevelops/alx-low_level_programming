#include "lists.h"

/**
 * print_list - Prints all the elements of a list
 * @h: Pointer to the list to be printed
 *
 * Return: The number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
