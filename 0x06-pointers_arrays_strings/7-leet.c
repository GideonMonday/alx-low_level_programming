#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "main.h"

/**
 * leet - Encodes a string into "1337".
 * @str: The input string to encode.
 *
 * Description:
 *   This function encodes the input string by replacing certain letters
 *   with their corresponding "1337" character substitutions.
 *
 * Prototype: char *leet(char *);
 * Rules:
 *   Letters a and A are replaced by 4.
 *   Letters e and E are replaced by 3.
 *   Letters o and O are replaced by 0.
 *   Letters t and T are replaced by 7.
 *   Letters l and L are replaced by 1.
 *
 * Return: The encoded string.
 */
char *leet(char *str)
{
	char leet_map[256] = {0};

	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (leet_map[(unsigned char)str[i]] != 0)
		{
			str[i] = leet_map[(unsigned char)str[i]];
		}
	}

	return (str);
}
