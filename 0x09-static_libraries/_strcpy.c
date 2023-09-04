#include "main.h"

/**
 * _strcpy - Copies a string (including the null-terminator) to another string.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (dest_start);
}
