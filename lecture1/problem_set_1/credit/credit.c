#include <cs50.h>
#include <stdio.h>


long get_number(void);
char* get_digits(long l_number);

int main(void) 
{
    long l_number = get_number();
    printf("%s\n",get_digits(l_number));
}






long get_number(void){
    long long_number;
    do
    {
        long_number = get_long("Whats the number? ");
    } while (long_number < 0 );
    
    return long_number;
}

char* get_digits(long l_number) {
    int counter = 0;
    int sum = 0;
    while (l_number > 0) {
        int auxNum = l_number % 10;
        if (counter % 2 != 0) {
            int doubledDigit = auxNum * 2;
            sum += (doubledDigit > 9) ? doubledDigit - 9 : doubledDigit;
        } else {
            sum += auxNum;
        }
        counter++;
        l_number /= 10;
    }

    if (sum % 10 == 0) {
        return "It's valid!";
    } else {
        return "It's not valid";
    }
}


