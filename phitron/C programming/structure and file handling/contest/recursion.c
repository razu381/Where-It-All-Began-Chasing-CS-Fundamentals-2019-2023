#include<stdio.h>


void print_num(int n){
    if(n == 0){
        return;
    }
    printf("%d",n);

    print_num(n);
}

int main(){
    int n = 5;
    print_num(n);
}
