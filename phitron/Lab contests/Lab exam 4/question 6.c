//void makeNArray(int n, int squares[]) populates squares with first n square numbers.
//For example, makeNarray(4, squares) will populate squares with 1, 4, 9, 16. Implement
//the function.
#include<stdio.h>

void makeNArray(int n, int squares[]){
    for(int i = 1; i <= n; i++){
        squares[i-1] = i*i;
    }
}

int main(){
    int n = 10;
    int square[n];

    makeNArray(n,square);
    for(int i = 0; i < n; i++){
        printf("%d ",square[i]);
    }
}




