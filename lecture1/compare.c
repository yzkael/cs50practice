#include <stdio.h>
#include <cs50.h>

int main(void){
    int x = get_int("What's x? ");
    int y = get_int("What's y? ");

    if (x < y)
    {
        printf("X is less than y\n");
    }
    else{
        printf("Y is less than X\n");
    }
    
    return 0;
}