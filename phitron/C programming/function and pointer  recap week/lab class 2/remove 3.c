#include<stdio.h>



void rem_arr(int size, int arr[],int pos){
    for(int i = pos + 1; i < size;i++){
        arr[i - 1] = arr[i];
    }
}

int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(a) / sizeof(a[0]);
    int pos;
    scanf("%d",&pos);
    rem_arr(size,a,pos);
    for(int i = 0; i < size - 1; i++){
        printf("%d ",a[i]);
    }
}
