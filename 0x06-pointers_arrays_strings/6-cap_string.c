#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string to capitalize.
 *
 * Description:
 *   This function capitalizes the first letter of each word in the given
 *   string, considering certain separators. It also converts subsequent
 *   letters of each word to lowercase.
 *
 * Prototype: char *cap_string(char *);
 * Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 *
 * Return: The capitalized string.
 */
char *cap_string(char *str)
{
	bool new_word = true;
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
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
