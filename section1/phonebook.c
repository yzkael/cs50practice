#include <stdio.h>
#include <cs50.h>

int main(void){
    string name = get_string("Whats your name? ");
    int age = get_int("How old are you? ");
    long phone = get_long("Whats your phone number? ");

    printf("Name: %s\n Age: %i\nCellphone: %li\n",name,age,phone);
}