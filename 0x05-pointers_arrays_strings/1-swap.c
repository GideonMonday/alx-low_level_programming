#include "main.h"

/**
 * swap_int - Swaps the values of two integers using pointers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */

void swap_int(int *a, int *b)
{
int Alx = *a;
*a = *b;
*b = Alx;
}
