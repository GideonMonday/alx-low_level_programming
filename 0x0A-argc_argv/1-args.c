#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including the program name)
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: (0) Always, since it's the entry point of the program
 */
int main(int argc, char *argv[])
{
	/**
	 * argc - Argument count, represents the number of command-line arguments
	 * @argc: The number of command-line arguments (including the program name)
	 * @argv: An array of strings containing the command-line arguments
	 *
	 * Return: (0) Always, since it's the entry point of the program
	 */
	printf("%d\n", argc - 1);

	return (0);
}
