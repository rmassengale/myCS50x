#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Ask the user their name
    string name = get_string("What's your name? ");

    // Print hello to the user
    printf("hello, %s\n", name);
}
