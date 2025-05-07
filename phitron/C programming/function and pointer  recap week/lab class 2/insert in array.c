#include<stdio.h>

void insert(int size, int arr[],int pos, int val){
    for(int i = size - 2; i >= pos; i--){
        arr[i+1] = arr[i];
        for(int i = 0; i < size;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    arr[pos] = val;

}

int main(){
    int arr[6] = {1,3,4,5,6};
    int pos,val;
    scanf("%d %d",&pos,&val);
    insert(6,arr,pos,val);

    for(int i = 0; i < 6; i++){
        printf("%d ",arr[i]);
    }
}
