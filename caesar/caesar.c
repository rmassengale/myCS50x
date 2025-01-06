#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool only_digits(string key);

int main(int argc, string argv[])
{
    // Make sure program was run with just one command-line argument
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    // Convert argv[1] to int
    int k = atoi(argv[1]);

    // Get plaintext from user
    string plaintext = get_string("plaintext:  ");

    // Encipher text
    printf("ciphertext: ");
    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        if (isalpha(plaintext[i]) && isupper(plaintext[i]))
        {
            plaintext[i] = ((plaintext[i] - 65 + k) % 26) + 65;
            printf("%c", plaintext[i]);
        }
        else if (isalpha(plaintext[i]) && islower(plaintext[i]))
        {
            plaintext[i] = ((plaintext[i] - 97 + k) % 26) + 97;
            printf("%c", plaintext[i]);
        }
        else
        {
            printf("%c", plaintext[i]);
        }
    }
    printf("\n");
}

// Check user input for digits
bool only_digits(string key)
{
    for (int i = 0, length = strlen(key); i < length; i++)
    {
        if (isdigit(key[i]))
        {
            continue;
        }
        else
        {
            return false;
        }
    }
    return true;
}
