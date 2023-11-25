#include <stdio.h>
#include <cs50.h>

//Prototypes
int get_size(void);
void print_grid(int size);

int main(void){
    // Get Size of grid 
    int n = get_size();
    
    // Print grid
    print_grid(n);
    
}


int get_size(void){
    int n;
    do
    {
        n = get_int("Size: ");
    } while (n < 1);
    return n;
}

void print_grid(int size){
  for ( int i = 0; i < size; i++)
  {
    for ( int j = 0; j < size; j++)
    {
        printf("#");
    }
    printf("\n");
    
  }
    
}
