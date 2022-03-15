#include <stdio.h>

/**
 * main - program start point
 *
 * Return: 0 if successful
 */
int main(void)
{
	long int a = 1, b = 2, sum = 0, count = 2;

	while (sum < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (sum % 2 == 0)
			count += sum;
	}
	printf("%lu\n", count);
	return (0);
}
