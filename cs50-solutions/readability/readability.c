#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


int count_letters(string text);
int count_words(string text);
int count_sentences(string text);


int main(void)
{
    //  djskaldjasldkjaks
    string text = get_string("Text: ");
    int letters = count_letters(text);
    int words = count_words(text);
    int sentences = count_sentences(text);

    printf("%i letters \n", letters);
    printf("%i words \n", words);
    printf("%i sentences \n", sentences);


    float L = ((float)letters / (float)words * 100);

    float S = ((float)sentences / (float)words * 100);

    float cal = (0.0588 * L) - (0.296 * S) - 15.8;

    // dsajkdkasjdlas
    int index = round(cal);


    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}

int count_letters(string text)
{
    int letters = 0;
    int i;

    for (i = 0; i < strlen(text); i++)
    {
        if (isalpha(text[i]))
        {
            letters = letters + 1;
        }
    }
    return letters;
}

int count_words(string text)
{
    int spaces = 0;
    int i;

    for (i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i]))
        {
            spaces = spaces + 1;
        }
    }
    int words = spaces + 1;
    return words;
}

int count_sentences(string text)
{
    int sentences = 0;
    int i;

    for (i = 0; i < strlen(text); i++)
    {
        if (text[i] == '!')
        {
            sentences = sentences + 1;
        }
        else if (text[i] == '?')
        {
            sentences = sentences + 1;
        }
        else if (text[i] == '.')
        {
            sentences = sentences + 1;
        }
    }
    return sentences;
}

