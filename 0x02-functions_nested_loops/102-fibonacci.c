#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 when successful
 */

int main(void)
{
	int count = 0;
	long int a = 1, b = 2, sum;

	printf("%lu, %lu, ", a, b);

	while (count < 48)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (count != 47)
		{
			printf("%lu, ", b);
		}
		else
		{
			printf("%lu", b);
		}

		count++;
	}
	putchar('\n');
	return (0);
}

