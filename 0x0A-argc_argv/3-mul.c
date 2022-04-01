#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings passed as arguments to the program
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int mul;

	if ((argc <= 2) || (argc > 3))
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	return (0);
}
