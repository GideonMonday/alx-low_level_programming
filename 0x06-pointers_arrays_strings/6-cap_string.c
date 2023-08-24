#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * is_separator: - Checks if a character is a separator.
 * @c: The character to check.
 * Return: The capitalized string.
 */

bool is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}

	return (false);
}

char *cap_string(char *str)
{
	bool new_word = true;
	int i;

	for (i = 0; str[i]; i++)

	{
		if (is_separator(str[i]))

		{
			new_word = true;
		}

		else if (new_word)
		{
			if (str[i] >= 'a' && str[i] <= 'z')

			{
				str[i] -= ('a' - 'A');
			}
			new_word = false;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')

		{
			str[i] += ('a' - 'A');
		}
	}

	return (str);
}
