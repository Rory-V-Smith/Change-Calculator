#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{

    // Use get_float to prompt how much change is needed
    float dollarsOwed;
    do
    {
        dollarsOwed = get_float("Change owed: ");
    }
    while (dollarsOwed < 0);

    printf("Dollars: %f\n", dollarsOwed);

    // Convert dollars to cents  (int cents = round(dollars *100))
    int centsOwed = round(dollarsOwed * 100);

    printf("Cents: %i\n", centsOwed);

   // Define coins as variables
    int quarter = 25;
    int dime = 10;
    int nickle = 5;
    int penny = 1;

    // Track number of coins given
 int coinsGiven = 0;

    while (centsOwed >= quarter)
    {
        centsOwed = centsOwed - 25;
        coinsGiven++;
    }

    while (centsOwed >= dime)
    {
        centsOwed = centsOwed - 10;
        coinsGiven++;
    }

    while (centsOwed >= nickle)
    {
        centsOwed = centsOwed - 5;
        coinsGiven++;
    }

    while (centsOwed >= penny)
    {
        centsOwed = centsOwed - 1;
        coinsGiven++;
        if (centsOwed <= 0)
            break;
    }

printf("Coins given: %i\n", coinsGiven);
}


