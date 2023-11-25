#include <stdio.h>
#include <cs50.h>

int main(void){
    int years = 0;
    int ni;
    int nf;
    do
    {
        ni = get_int("Whats the initial number of llamas?  ");
    } while (ni < 0);
    
    do
    {
        nf = get_int("Whats the goal number of llamas? ");
    } while (nf < ni);
    

    while (ni < nf)
    {
        ni = ni + ni/3 - ni/4;
        years++;
    }
    printf("It took %i years to reach the goal\n", years);
}