#include<stdio.h>
#include<string.h>


int main(void){
    int n;
    scanf("%d",&n);
    int arr[n];
    int rev_arr[n];
    int new_arr[n];
    //get the array input
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }
    //reverse the array
    for(int i = n-1,j = 0; i >= 0; i--,j++ ){
        rev_arr[j] = arr[i];
        printf("%d ",rev_arr[j]);
    }
    printf("\n");
    //new array;
    for(int i = 0; i < n;i++){
        new_arr[i] = rev_arr[i] - arr[i];
        if(new_arr[i] < 0){
            new_arr[i] *= -1;
        }
        printf("%d ",new_arr[i]);
    }
}
