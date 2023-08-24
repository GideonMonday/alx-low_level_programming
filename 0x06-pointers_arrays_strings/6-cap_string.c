include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - Capitalizes words in a string.
 * @str: The input string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i, Q;
	char sp[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; str[i]; i++)
	{

		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		for (Q = 0; Q < 13; Q++)
		{
			if (str[i] == sp[Q])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] -= 32;
				}
			}
		}
	}

	return (str);
}
