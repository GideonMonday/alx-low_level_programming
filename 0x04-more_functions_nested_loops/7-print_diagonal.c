#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using backslashes
 * @n: The number of times the character '\' should be printed
 */
void print_diagonal(int n)
{
int spaces = 0;

if (n <= 0)
{
_putchar('\n');
}
else if (n > 0)
{
while (spaces < n)
{
int i = 0;

while (i < spaces)
{
_putchar(' ');
i++;
}

_putchar('\\');
_putchar('\n');
spaces++;
}
}
}
