#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if exact, -1 if s1 < s2, 1 if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	int result;
	unsigned int i;

	for (i = 0; i < strlen(s1); i++)
	{
		if (s1[i] < s2[i])
		{
			result = -15;
			break;
		}

		else if (s1[i] > s2[i])
		{
			result = 15;
			break;
		}

		else
			result = 0;
	}
	return (result);
}
