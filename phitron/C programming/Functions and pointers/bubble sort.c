#include<stdio.h>

//bubble sort

void sort(int n, int a[]){
    for(int i = 0 ; i < n - 1;i++){
        for(int j = 0; j < n - i -1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main(){
    int len;
    scanf("%d",&len);
    int a[len];

    for(int i = 0; i < len; i++){
        scanf("%d",&a[i]);
    }

    sort(len,a);

    //print the array
    for(int i = 0; i < len;i++){
        printf("%d ",a[i]);
    }
}
