#include<stdio.h>

int min_num(a,b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}


int main(void){
    //min_num(5,9);
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("%d",min_num(num1,num2));
}
