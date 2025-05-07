#include <stdio.h>
int findGCD(int, int);

int main() {
    int array[] = {12,18,30};
    int gcd = array[0];

    //Reuse the previous calculated GCD value
    for(int i=1; i<4; i++){
      gcd = findGCD(array[i], gcd);
    }

    printf("GCD: %d", gcd);
}

//Recursive function to find GCD of two numbers
int findGCD(int a, int b){
    if(b == 0)
      return a;
    return findGCD(b, a%b);
}
