#include<stdio.h>


int make_square(int n){
    n  *= n;

    printf("%d",n);
}


int main(){
    make_square(2);
}
