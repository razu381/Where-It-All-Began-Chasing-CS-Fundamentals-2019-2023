#include<stdio.h>
#include<string.h>

void take_input(int n, int arr[]){
    for(int i = 0; i < n;i++){
        scanf("%d",&arr[i]);
    }
}

int main(void){
    int size;
    scanf("%d",&size);
    int arr[size];
    take_input(size,arr);

    for(int i = 0; i < size;i++){
        printf("%d ",arr[i]);
    }
}
