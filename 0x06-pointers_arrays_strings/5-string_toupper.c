#include "main.h"

/**
 * string_to_upper - changes all lowercase letters of a string to uppercase
 * @c: string to uppercase
 * Return: uppercased string
 */
char *string_toupper(char *c)
{
	unsigned int i;

	for (i = 0; i < strlen(c); i++)
	{
		if (c[i] > 97 && c[i] < 122)
			c[i] = c[i] - 32;
		else
			c[i] = c[i];
	}
	return (c);
}
