#include <stdio.h>
#include <cs50.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);
int main(void)
{
    // how many cents
    int cents = get_cents();

    // caculate quarter
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // caculate dimes
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // calculate nickles
    int nickles = calculate_nickels(cents);
    cents = cents - nickles * 5;

    // calculate pennies
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // sum total
    int totalCoins = quarters + dimes + nickles + pennies;

    // finally, print total sum of coins
    printf("%d\n", totalCoins);
}
int get_cents(void)
{
    int cents;
    do
    {
        cents = get_int("Change owed: ");
    }
    while (cents < 0);

    return cents;
}
int calculate_quarters(int cents)
{
    int quarter = 0;
    while (cents >= 25)
    {
        cents = cents - 25;
        quarter++;
    }
    return quarter;
}
int calculate_dimes(int cents)
{
    int dime = 0;
    while (cents >= 10)
    {
        cents = cents - 10;
        dime++;
    }
    return dime;
}
int calculate_nickels(int cents)
{
    int nickle = 0;
    while (cents >= 5)
    {
        cents = cents - 5;
        nickle++;
    }
    return nickle;
}
int calculate_pennies(int cents)
{
    int pennie = 0;
    while (cents >= 1)
    {
        cents = cents - 1;
        pennie++;
    }
    return pennie;
}