#include "main.h"

/**
 * str_len - Finds the length of a string, subtructed by 1
 * @b: String whose length is to be found
 *
 * Return: Length of the string - 1
 */
unsigned int str_len(const char *b)
{
	int i, len = 0;

	for (i = 0; b[i]; i++)
	{
		len++;
	}
	len = len - 1;
	return (len);
}

/**
 * power - Raises a number to a given exponent
 * @base: base
 * @exponent: exponent
 * Return: result of calculation
 */
int power(int base, int exponent)
{
	int i, result = 1;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned integer
 * @b: String of 0 and 1 chars to be converted to an unsigned integer
 *
 * Return: The converted number OR
 *         0 if: one or more chars in string b is not a 0 or 1 OR
 *               b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int index, str_index;

	if (b == NULL)
		return (0);
	str_index = str_len(b);
	for (index = str_index; index >= 0; index--)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		uint += (b[index] - '0') * power(2, str_index - index);
	}

	return (uint);
}
