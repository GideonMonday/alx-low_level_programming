#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random password.
 *
 * Return: Always 0.
 */
int main(void)
{
    const char valid_chars[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int password_length = 8;
    char password[password_length + 1];

    srand(time(NULL));

    for (int i = 0; i < password_length; i++)
    {
        int random_index = rand() % (sizeof(valid_chars) - 1);
        password[i] = valid_chars[random_index];
    }

    password[password_length] = '\0';

    printf("Generated password: %s\n", password);

    return (0);
}
