#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number and returns the number
 * @n: number to check its sign
 *
 * Return: 1 if number is greater than 0, -1 if less than 0, 0 otherwise
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
