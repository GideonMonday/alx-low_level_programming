#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: The string to print
 */
void puts_half(char *str)
{
	int length = str;
	int start = (length + 1) / 2;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
