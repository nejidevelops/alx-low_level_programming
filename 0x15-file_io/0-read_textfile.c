#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string
 * Return: size_t
 */
unsigned int binary_to_uint(const char *b)
{
	/*un unsi int bacio que sera llenado bit por bit*/
	unsigned int a = 0;

	/*desde el comienzo el puntero puede estar vacio*/
	if (b == 0)
		return (0);

	/*recorreremos el array*/
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		a = a << 1;
		if (*b == '1')
			a = a ^ 1;
		b++;
	}
	return (a);
}
