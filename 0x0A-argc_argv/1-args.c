#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings passed to the program as arguments
 *
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
