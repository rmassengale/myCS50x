#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Prototypes
bool only_digits(string s);

int main(int argc, string argv[])
{
    // Get key from user input
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    // Check digits
    else if (only_digits(argv[1]) != 0)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}

// Check if key is a digit
bool only_digits(string s)
{
    for (int i = 0, len = strlen(s); i < len; i++)
    {
        if (isdigit(s[i]))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}
