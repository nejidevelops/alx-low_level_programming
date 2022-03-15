#include <stdio.h>
#include "main.h"

/**
 * times_table - prints multiples of 9 in tabular format
 */
void times_table(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (b == 0)
				putchar(b + '0');

			else if ((a * b) < 10)
			{
				putchar(' ');
				putchar(' ');
				putchar((a * b) % 10 + '0');
			}

			else
			{
				putchar(' ');
				putchar((a * b) / 10 + '0');
				putchar((a * b) % 10 + '0');
			}

			if (b != 9)
				putchar(',');
		}
		putchar('\n');
	}
}
