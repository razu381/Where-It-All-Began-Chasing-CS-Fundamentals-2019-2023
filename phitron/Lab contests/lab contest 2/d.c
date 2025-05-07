#include<stdio.h>


int main(void){
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    int money_req = 0;

    for(int i = 1 ; i <= w;i++)
    {
        money_req += k * i;
    }
    if(money_req > n){

        printf("%d",money_req - n);
    }
    else{
        printf("0");
    }
}
