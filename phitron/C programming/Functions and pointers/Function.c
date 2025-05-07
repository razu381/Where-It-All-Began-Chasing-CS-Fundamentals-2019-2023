#include<stdio.h>

int find_max(int array[]){
    int len = 10;
    //printf("%d",len);

    int max = 0;
    for(int i = 0; i < len;i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}



int main(void){
    //write a function to find the maximum number in an array
    int array[10] = {1,2,323,40,5,6,7,8,9,10};
    int max = find_max(array);

    printf("%d \n",max);
}
