#include<stdio.h>
#include<string.h>

int get_sum(int n, int arr[]){
    int sum = 0;
    for(int i = 0; i < n;i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[] = {1,2,3,4,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int res = get_sum(size,arr);
    printf("%d",res);
}
