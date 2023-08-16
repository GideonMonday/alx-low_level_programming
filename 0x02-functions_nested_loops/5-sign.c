#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: The number to be checked
 * Return: 1 if positive, 0 if zero, -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar ('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar ('0');
	}
	else if (n < 0)
	{
		return (-1);
		_putchar('-');
	}
	return (0);
}
