#include<stdio.h>

void rem_arr(int size, int *arr,int pos){
    for(int i = pos+1; i < size; i++){
        arr[i - 1] = arr[i];
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int pos;
    scanf("%d",&pos);
    rem_arr(5,arr,pos);

    for(int i = 0; i < 4; i++){
        printf("%d ",arr[i]);
    }
}
