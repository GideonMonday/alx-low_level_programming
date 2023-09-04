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
	if (argc > 0 && argv[0] != NULL)
	{
		printf("%s\n", argv[0]);
	}
	else
	{
		printf("Program name not available.\n");
	}

	return (0);
}
