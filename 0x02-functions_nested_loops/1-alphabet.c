#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - secondary function
 *
 * Description: prints each letter of the alphabet, ending with a newline
 */
void print_alphabet(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i < 27; i++)
	{
		_putchar(abc[i]);
	}
}
