#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void putchar_many(int);

/**
 * print_to_98 - prints all numbers from n to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i < 0)
				putchar_many(i);

			else if (i < 10)
				putchar('0' + abs(i));
			else
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
			}

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i < 100)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
			}
			else
				putchar_many(i);

			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}

/**
 * putchar_many - uses putchar to print out more than 2 digits
 * @x: the value to be putchar-ed
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
