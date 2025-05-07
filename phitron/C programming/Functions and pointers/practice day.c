#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//bubble sort

void sort(int a[],int len){
    for(int i = 0; i < len;i++){
            for(int j = 1; j < len; j++){
                if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                }
            }


    }

}

int main(){
    int a[] = {9,8,7,5,6,4,3,1,2,10};
    int len = sizeof(a) / sizeof(a[0]) - 1;
    sort(a,len);

    for(int i = 0 ; i < len; i++){
        printf("%d ", a[i]);
    }
}
