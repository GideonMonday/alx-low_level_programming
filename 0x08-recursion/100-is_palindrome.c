#include <stdio.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;

	while (s[length] != '\0')
		length++;

	start = 0;
	end = length - 1;

	while (start < end)
	{
		if (s[start] != s[end])
			return (0);
		start++;
		end--;
	}

	return (1);
}
