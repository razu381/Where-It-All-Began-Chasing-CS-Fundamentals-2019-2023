#include<stdio.h>

void find_square(int* a,int* b){
    *a = *a * *a ;
    *b = *b * *b;

    printf("%d %d",*a,*b);
}

int main(void){
    int a = 10, b = 50;
    int* pa = &a;
    int* pb = &b;
    find_square(pa,pb);
}
