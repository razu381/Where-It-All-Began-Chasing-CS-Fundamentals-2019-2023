#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];

    memset(arr,0,8);

    for(int i =0;i < n; i++){
        printf("%d \n",arr[i]);
    }
}
