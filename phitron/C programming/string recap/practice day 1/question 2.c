//Write a C code which takes an array of size N as input and do the following:
//Print the values of even indexes. Index of that array starts from 0.

#include<stdio.h>
#include<string.h>


//int main(void){}

int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i = 1; i < n; i++){
        scanf("%d",&arr[i]);
        if(i % 2 == 0){
            printf("%d ",arr[i]);
        }
    }
}
