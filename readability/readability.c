#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    // Get text from user
    string original_text;
    do
    {
        original_text = get_string("Text: ");
    }
    while (strlen(original_text) < 1);

    // Analyze text
    int letters = count_letters(original_text);
    int words = count_words(original_text);
    int sentences = count_sentences(original_text);

    // Calculate index
    float L = ((float) letters / words) * 100.0;
    float S = ((float) sentences / words) * 100.0;
    int index = round(0.0588 * L - 0.296 * S - 15.8); // Coleman-Liau Index

    // Print grade level
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

// Calc number of letters
int count_letters(string text)
{
    int letters = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isalpha(text[i]))
        {
            letters++;
        }
    }
    return letters;
}

// Calc number of words
int count_words(string text)
{
    int words = 1;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (isspace(text[i]))
        {
            words++;
        }
    }
    return words;
}

// Calc number of sentences
int count_sentences(string text)
{
    int sentences = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentences++;
        }
    }
    return sentences;
}
