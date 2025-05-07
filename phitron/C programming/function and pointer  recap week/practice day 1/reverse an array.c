#include<stdio.h>
#include<string.h>

//10 15 13 20 22
//


void rev_arr(int n,int arr[]){
    for(int i = 0, j = n-1; j > i;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
       // printf("%d \n",arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[] = {10,15,13,20,22};
    int n = sizeof(arr) / sizeof(arr[0]);
    rev_arr(n,arr);
//    for(int i = 0; i < n; i++){
//        printf("%d ",arr[i]);
//    }
}
