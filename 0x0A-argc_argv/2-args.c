#include "main.h"
#include <stdio.h>

/**
 * main - Prints the arguments passed to the program one per line
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings of arguments passed to the program
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
