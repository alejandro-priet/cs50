#include <cs50.h>
#include <stdio.h>
#include <math.h>

// ASCII  letters
int ascci_letters[] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};


int get_character_amount(char text[], int *number_caracters, int *number_words, int *number_sentence)
{   
    int c, i;
    int l = 0;
    int w = 0;
    int s = 0;
    for (c = 0; text[c] != '\0'; c++)
    {       
        for (i = 0; i <= sizeof(ascci_letters) ; i++)
        {
            if (text[c] == ascci_letters[i])
            {
                l++;
            }
        }
        if (text[c] == ' ')
        {
            w++;
        }
        else if (text[c] == 46 || text[c] == 33 || text[c] == 63)//,.!?
        {
            s++;
        }
        *number_caracters = l;
        *number_words = w + 1;
        *number_sentence = s;
    }
    
    return 0;
}

int main(void)
{
    int number_words, number_caracters, number_sentence;
    string text = get_string("Text: ");
    get_character_amount(text, &number_caracters, &number_words, &number_sentence);
    //printf("Words: %d\n", number_words);
    //printf("Sentence: %d\n", number_sentence);
    float L = ((float) number_caracters / (float) number_words) * 100;
    float S = ((float) number_sentence / number_words) * 100;
    
    float index = 0.0588 * L - 0.296 * S - 15.8;
    printf("%f\n", index);
    int Grade = round(index);
    
    if (Grade > 16)
    {
        printf("Grade 16+\n");
    }
    else if (Grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", Grade);
    }
    return 0;
    
}


 