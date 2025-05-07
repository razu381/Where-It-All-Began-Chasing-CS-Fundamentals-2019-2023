#include<stdio.h>

void insert(int size,int arr[],int pos,int val){
    for(int i = size - 2; i >= pos;i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = val;
}

int main(){
    int arr[7] = {1,2,3,4,6,7};
    int pos, val;
    scanf("%d %d",&pos,&val);
    insert(7,arr,pos,val);
    for(int i = 0; i < 7; i++){
        printf("%d ",arr[i]);
    }
}
