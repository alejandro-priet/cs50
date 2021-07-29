#include <stdio.h>
#include <cs50.h>

int main(void)
{    
    int i, j, n; 
    int answer = get_int("Height: ");
    //we ask if the input is an integer positive between 1 and 8
    if (answer > 0 && answer < 9)
    {
        for (i = answer; i != 0 ; i--)
        {   
            for (j = 1 ; j < i ; j++)
            {
                printf(" ");
            }
            for (n = -1 ; n < (answer - i) ; n++)
            {
                printf("#");
            }
            printf("\n");
        }  
    }
    //we return to main() if the input is not correct
    else
    {
        return main();
    }
}