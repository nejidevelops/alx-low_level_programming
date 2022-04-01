#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of string arguments passed to the program
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
