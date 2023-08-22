#include "main.h"

/**
 * stringLength - Returns the length of a string
 * @str: The input string
 *
 * Return: The length of the string
 */

int _strlen(char *str)
{
	int Leng = 0;

	while (*str != '\0')

	{
		Leng++;
		str++;
	}

	return (Leng);
}
