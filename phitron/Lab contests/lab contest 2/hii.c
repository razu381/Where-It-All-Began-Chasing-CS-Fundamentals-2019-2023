#include<stdio.h>

int main(){

    for(int i = 1; i <= 5; i++){
        if(i == 4){
            break;
            printf("HI break \n");
        }else{
            printf("%d \n",i);
        }
    }
}
