#include <stdio.h>

/**
 * main - program start point
 *
 * Return: 0 if successful
 */
int main(void)
{
	long long int a = 1, b = 2, sum, n = 0;

	printf("%lld, %lld, ", a, b);

	while (n < 98)
	{
		sum = a + b;
		a = b;
		b = sum;

		if (n != 97)
			printf("%lld, ", sum);
		else
			printf("%lld", sum);

		n++;
	}
	putchar('\n');
	return (0);
}
