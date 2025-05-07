#include<stdio.h>

void rev_arr(int size, int arr[]){
    for(int i = 0, j = size - 1; i < j; i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);

    rev_arr(size,arr);

    for(int i = 0; i < size;i++){
        printf("%d   ",arr[i]);
    }
}
