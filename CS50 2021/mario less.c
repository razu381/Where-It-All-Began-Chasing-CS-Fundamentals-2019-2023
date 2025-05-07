#include <stdio.h>

#include <cs50.h>

int main(void)
{
    // to get the positive integer
    int  height;


    do
    {
        height = get_int(" Height: ");
    }

    while (height < 1 || height > 8);

    //building block of super mario
    //it is for tracking the height and width
    for (int i = 0; i < height; i++)
    {

        //it is  for traking spaces
        for (int k = (height - 1); k > i; k--)
        {

            printf(" ");
        }
        // it is for tracking hashes
        for (int j = 0; j <= i; j++)
        {

            printf("#");
        }

        printf("\n");
    }

}

