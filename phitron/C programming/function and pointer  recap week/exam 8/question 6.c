#include<stdio.h>


int main(){
    int a = 10;
    int *P = &a;
    int **Q = &P;
    int ***R = &Q;

    ***R = 20;

    printf("%d",a);
}

