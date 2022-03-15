#include <stdio.h>
#include "main.h"

void putchar_many(int);

/**
 * print_times_table - prints the timetable of integer n
 * @n: number to generate the times table
 */
void print_times_table(int n)
{
	if (n >=  0 && n <= 15)
	{
		int a, b;

		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b == 0)
					putchar(b + '0');
				else if ((a * b) < 10)
				{
					putchar(' ');
					putchar(' ');
					putchar(' ');
					putchar((a * b) % 10 + '0');
				}

				else if ((a * b) < 100)
				{
					putchar(' ');
					putchar(' ');
					putchar((a * b) / 10 + '0');
					putchar((a * b) % 10 + '0');
				}
				else
				{
					putchar(' ');
					putchar_many(a * b);
				}

				if (b != n)
					putchar(',');
			}
			putchar('\n');
		}
	}
}

/**
 * putchar_many - putchar a number with more than 2 digits
 * @x: the number with more than 2 digits
 */
void putchar_many(int x)
{
	if (x < 0)
	{
		putchar('-');
		x = -x;
	}

	if (x / 10)
		putchar_many(x / 10);

	putchar(x % 10 + '0');
}
