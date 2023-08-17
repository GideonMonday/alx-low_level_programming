#include "main.h"

/**
* _isdigit - checks if number is a digit
* if - conditional statament
* @c: the character to be checked
*Return: 0 upon success
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
