#include "main.h"

/**
 * _memset - Fills the first @n bytes of the memory area pointed to by @s with
 * the constant byte @b.
 * @s: Pointer to the memory area to fill.
 * @b: The constant byte to fill with.
 * @n: The number of bytes to fill.
 *
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (start);
}
