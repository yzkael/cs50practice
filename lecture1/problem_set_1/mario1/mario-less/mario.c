#include <cs50.h>
#include <stdio.h>

int main(void) 
{
    int height;

    do
    {
        height = get_int("Height: ");
    } while (height < 1);
    //print new line
    for (int i = 0; i < height; i++)
    {
        // Print spaces
        for (int j = height - i -1; j > 0; j--)
        {
            printf(" ");
        }

        // Print hashes
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        
        printf(" ");

        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}
