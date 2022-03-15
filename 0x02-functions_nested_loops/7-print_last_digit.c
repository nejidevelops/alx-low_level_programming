#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints & returns the last digit of a number
 * @x: number to be checked
 *
 * Return: return the last value of a number
 */
int print_last_digit(int x)
{
	int l = abs(x % 10);

	_putchar('0' + l);
	return (l);
}
