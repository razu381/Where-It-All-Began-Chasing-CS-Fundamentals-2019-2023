#include<stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    int add = a + b;
    int substract = a - b;
    int multiply = a * b;
    int largest = 0;

    if(add > substract){
        largest = add;
    }else{
        largest = substract;
    }
    if(multiply > largest){
        largest = multiply;
    }
    printf("%d",largest);
}
