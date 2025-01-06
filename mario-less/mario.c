#include <cs50.h>
#include <stdio.h>

void print_row(int bricks);
void print_space(int spaces);

int main(void)
{
    // Prompt user for pyramid height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print a row of bricks and spaces based on user input
    for (int i = 0; i < height; i++)
    {
        print_space((height - 1) - i);
        print_row(i + 1);
    }
}

// Print a row of bricks
void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("\n");
}

// Print a space
void print_space(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}
