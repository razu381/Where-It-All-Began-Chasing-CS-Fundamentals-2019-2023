#include<stdio.h>

void makeSum(int a, int b, int *sum){
    *sum = a + b;


}

int main(){
    int x = 55, y = 45, sum = 0;
    printf("%d \n",sum);
    makeSum(x,y,&sum);

    printf("%d",sum);
}
