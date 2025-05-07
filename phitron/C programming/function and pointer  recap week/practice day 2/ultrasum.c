#include<stdio.h>
#include<string.h>

void ultrasum(int *a,int *b,int *sum,int *multi){
    *sum = *a + *b;
    *multi = *a * *b;
}

int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum,multi;
    ultrasum(&a,&b,&sum,&multi);

    printf("%d %d",sum,multi);

}
