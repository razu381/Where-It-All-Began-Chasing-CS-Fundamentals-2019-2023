#include<stdio.h>

int main(){
    int a = 10;
    float b = 25;
    char c = 'c';

    int *pa = &a;

    printf("address of pa = %d \n",a);

    *pa = 66;

    printf("pa = %d",a);
}
