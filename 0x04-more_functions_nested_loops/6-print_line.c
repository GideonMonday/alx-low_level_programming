#include "main.h"

/**
 * print_line - Prints a line of underscores or hyphens
 * @n: The number of times the character '_' or '-' should be printed
 */
void print_line(int n)
{
int i = 0;

if (n <= 0)
{
_putchar('\n');
}
else if (n > 0)
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
