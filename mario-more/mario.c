#include <cs50.h>
#include <stdio.h>

void print_row(int bricks);
void print_space(int spaces);
void print_gap(void);

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
        print_gap();
        print_row(i + 1);
        printf("\n");
    }
}

// Print a row of bricks
void print_row(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}

// Print a space
void print_space(int spaces)
{
    for (int i = 0; i < spaces; i++)
    {
        printf(" ");
    }
}

// Print a gap between pyramids
void print_gap(void)
{
    printf("  ");
}
