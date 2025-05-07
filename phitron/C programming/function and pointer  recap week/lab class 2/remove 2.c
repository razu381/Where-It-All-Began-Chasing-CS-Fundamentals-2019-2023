#include<stdio.h>


void remove_arr(int size, int arr[],int pos){
    for(int i = pos+1; i < size; i++){
        arr[i - 1] = arr[i];
    }
}


int main(){
    int num[] = {1,50,100,3400,4545,3434,2325,53434,4343,4334};
    int size = sizeof(num) / sizeof(num[0]);
    int pos;
    scanf("%d",&pos);
    remove_arr(size,num,pos);

    for(int i = 0; i < size - 1; i++){
        printf("%d ",num[i]);
    }
}
