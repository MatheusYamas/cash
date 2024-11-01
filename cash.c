#include <stdio.h>
#include <cs50.h>

int main(void){
    int change;
    do{
        change = get_int("Change owed: ");
    }
    while (change < 0);
    int coins = 0;
    int total = change;
    for (int quarters = 25; quarters <= change; quarters = 25){
        coins++;
        change -= 25;
    }
    for (int dimes = 10; dimes <= change; dimes = 10){
        coins++;
        change -= 10;
    }
    for (int nickels = 5; nickels <= change; nickels = 5){
        coins++;
        change -= 5;
    }
    for (int pennies = 1; pennies <= change; pennies = 1){
        coins++;
        change -= 1;
    }
    printf("%i\n", coins);
}
