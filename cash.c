#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float amount;
    do
    {
        printf("Change owed ");
        amount = get_float();

    }
    while (amount < 0);

    amount *= 100;

    int amountOfCents = (int)round(amount); // Convert our change in float into a cents
    const int quarter = 25;
    const int dime = 10;
    const int nickel = 5;
    const int penni = 1;
    int counterOfCoins = 0;

    while (amountOfCents >= quarter)
    {
        counterOfCoins++;
        amountOfCents -= quarter;
    }

    while (amountOfCents >= dime)
    {
        counterOfCoins++;
        amountOfCents -= dime;
    }

    while (amountOfCents >= nickel)
    {
        counterOfCoins++;
        amountOfCents -= nickel;
    }

    while (amountOfCents > 0)
    {
        counterOfCoins++;
        amountOfCents -= penni;
    }

    printf("%i", counterOfCoins);
}
