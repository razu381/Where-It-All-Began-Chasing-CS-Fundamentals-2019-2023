#include<stdio.h>



int main(void){
    int counter[11] = {0};

    int values[] = {1,1,2,2,3,3,4,4,5,5,5,5,5};
    int val_len = sizeof(values) / sizeof(values[0]);

    for(int i = 0;i < val_len;i++){
        counter[values[i]]++;
    }

    for(int i = 1 ; i < 11 ;i++){
        printf("%d => %d \n",i,counter[i]);
    }
}
