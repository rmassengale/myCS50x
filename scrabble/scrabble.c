#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Constants
// Set point values for letters
const int POINTS[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                      1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// Prototypes
int compute_score(string word);

int main(void)
{
    // Get player inputs
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Compute score based on user input
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // Print player with the most points
    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

// Compute score of word
int compute_score(string word)
{
    // Set counter for score
    int score = 0;

    // Get value of each letter for total score
    for (int i = 0, len = strlen(word); i < len; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}
