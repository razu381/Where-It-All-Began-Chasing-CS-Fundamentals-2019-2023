#include <stdio.h>

#include <cs50.h>

#include <math.h>

int main(void)
{
    // to get the positive integer
    
    float  owed;
    
    do
    {
        owed = get_float(" change owed: \n");
    }

    while (owed  < 0.00);
    
    //variables

    int cents = round(owed * 100);
    
    int coins_need = 0;

    //while loops--start
    while (cents >= 25)
    {
        cents -= 25;
        
        coins_need += 1 ;
    }
    while (cents >= 10)
    {
        cents -= 10;
        
        coins_need += 1 ;
    }
    while (cents >= 5)
    {
        cents -= 5;
        
        coins_need += 1 ;
    }
    while (cents >= 1)
    {
        cents -= 1;
        
        coins_need += 1 ;
    }
    //while loops ends
    printf("%i \n", coins_need);
     
    
    
    
    





    
}