#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int year = 0;

    while( a <= b){
        a *= 3;
        b *= 2;

        year += 1;
    }
    printf("%d",year);
}
