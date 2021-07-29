// Aryan Chaurasia
// CS50 Pset 2 Caesar
// Jan 4, 2021
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    //  returns 1 or error if the arguments amount is lower or bigger than 2
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        //check if the seecond argument have digits
        string k = argv[1];
        for (int i = 0; i < strlen(k); i++)
        {
            if (isdigit(k[i]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;

            }
        }
        int key = atoi(k);
        string text = get_string("Text: ");

        for (int i = 0; i < strlen(text); i++)
        {
            if (isupper(text[i]))
            {

                text[i] = (text[i] - 65);
                text[i] = (text[i] + key) % 26;
                text[i] = (text[i] + 65);
            }
            if (islower(text[i]))
            {
                text[i] = (text[i] - 97);
                text[i] = (text[i] + key) % 26;
                text[i] = (text[i] + 97);

            }
            if (isalpha(text[i]) == 0)
            {
                text[i] = text[i];
            }
        }
        printf("Ciphertext: %s", text);
        printf("\n");

    }

}