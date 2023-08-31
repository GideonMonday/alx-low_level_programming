#include <stdio.h>

/**
 * wildcmp - Compares two strings considering wildcard '*'.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared.
 *
 * Return: 1 if strings are identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*' || (*s1 == *s2 && *s1 != '\0'))
	{
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}

	return (0);
}
