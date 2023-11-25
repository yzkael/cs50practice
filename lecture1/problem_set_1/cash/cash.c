#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // TODO
    int n_cents;
    do
    {
       n_cents = get_int("How many cents do you own? ");

    } while (n_cents < 0);
    

    return n_cents;
}

int calculate_quarters(int cents)
{
    // TODO
    int n_quarters = 0;
    int i = 25;
    while (cents >= i)
    {
       cents = cents - i;
       n_quarters++;
        
    }
    

    return n_quarters;
    return cents;
}

int calculate_dimes(int cents)
{
    // TODO
    int n_dimes = 0;
    int i = 10;
    while (cents >= i)
    {
       cents = cents - i;
       n_dimes++;
        
    }
    

    return n_dimes;
    return cents;
}



int calculate_nickels(int cents)
{
    // TODO
    int n_nickels = 0;
    int i = 5;
    while (cents >= i)
    {
       cents = cents - i;
       n_nickels++;
        
    }
    

    return n_nickels;
    return cents;
}

int calculate_pennies(int cents)
{
    // TODO
    int n_pennies = 0;
    int i = 1;
    while (cents >= i)
    {
       cents = cents - i;
       n_pennies++;
        
    }
    

    return n_pennies;
    return cents;
}
