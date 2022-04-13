#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Adds two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtructs two numbers
 * @a: Integer to be subtracted from
 * @b: Integer to subtract
 *
 * Return: Difference between the two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divids two integers
 * @a: Integer to be divided
 * @b: integer divisor
 *
 * Return: Result of division
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Finds the remainder of division of two integers
 * @a: First integer
 * @b: Divisor
 *
 * Return: Remainder after division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
