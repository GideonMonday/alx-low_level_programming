#include "main.h"

/**
 *print_square - Prints a square made of '#'.
 * @size: The size of the square
 * print_square: prints squares
 * Return: void
 */
void print_square(int size)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
int row, col;
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
