#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz";
	int i, n = 0;

	while (n < 10)
	{
		for (i = 0; i < 26; i++)
			_putchar(abc[i]);
		_putchar('\n');
		n++;
	}
}
