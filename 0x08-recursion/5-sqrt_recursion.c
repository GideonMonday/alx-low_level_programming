#include <stdio.h>

/**
 * _sqrt_helper - A helper function to recursively find the square root.
 * @n: The number for which to find the square root.
 * @i: The current value to check for a square root.
 *
 * Return: The square root of n if found, otherwise -1.
 */
int _sqrt_helper(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: The natural square root of n.
 *         If n does not have a natural square root, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_sqrt_helper(n, 1));
	}
}

/**
 * _sqrt_helper - A helper function to recursively find the square root.
 * @n: The number for which to find the square root.
 * @i: The current value to check for a square root.
 *
 * Return: The square root of n if found, otherwise -1.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}

	return (_sqrt_helper(n, i + 1));
}
