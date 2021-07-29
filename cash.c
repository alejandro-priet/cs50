#include <stdio.h>
#include <cs50.h>
#include <math.h>


int main(void)
{
    float cash = get_float("How much cash do you have: ");
    //we poof of the value is positive 
    if (cash < 0)
    {
        return main();
    }
    //we round the input value and multipy by 100
    float cash_rounded = round(cash * 100);
    int number_coins = 0;
    //we made a cascade of conditionals to prof the
    //diferent coins we need each fall and adjust
    //to calculate the next amount
    float quarter = cash_rounded / 25;
    if (quarter >= 1)
    {
        cash_rounded = cash_rounded - 25 * floor(quarter);
        number_coins = floor(quarter);
        int tfive = (int)quarter;
        printf("Number of 25c: %i\n", tfive);
    }
    float dimes = cash_rounded / 10;

    if (dimes >= 1)
    {
        cash_rounded = cash_rounded - 10 * floor(dimes);
        number_coins = number_coins + floor(dimes);
        int ten = (int)dimes;
        printf("Number of 10c: %i\n", ten);
    }
        
    float nickels = cash_rounded / 5;
        
    if (nickels >= 1)
    {
        cash_rounded = cash_rounded - 5 * floor(nickels);
        number_coins = number_coins + floor(nickels);
        int five = (int)nickels;
        printf("Number of 5c: %i\n", five);
    }
    
    float penny = cash_rounded / 1;
    if (penny >= 1)
    {
        cash_rounded = cash_rounded - 1 * floor(penny);
        number_coins = number_coins + floor(penny);
        int one = (int)penny;
        printf("Number of 1c : %i\n", one);
    }
    printf("Total: %i\n", number_coins);

}