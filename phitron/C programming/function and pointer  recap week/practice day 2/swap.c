#include<stdio.h>
#include<string.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d \n",a,b);
    swap(&a,&b);
    printf("%d %d",a,b);
}
