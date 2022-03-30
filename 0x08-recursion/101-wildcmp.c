#include "main.h"
/**
* wildcmp - comares two strings
*@s1: first string received
*@s2: second string received
*Return: 1 if string can be similar, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' &&  *s2 == '\0')
		return (1);
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
		if (*(s1 + 1) != '\0' && *s2 == '\0')
			return (0);
	}
	return (0);
}
