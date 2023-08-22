#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 *
 * Description: This function takes a string as input and reverses
 *              it in place by swapping characters from the beginning
 *              and end of the string towards the middle.
 */

void rev_string(char *s)
{
	int length = 0;
	char Q;
	int count = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	count = length;

	for (length = 0; length < count / 2; length++)
	{
		Q = s[length];
		s[length] = s[count - 1 - length];
		s[count - 1 - length] = Q;
	}
}

