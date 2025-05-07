#include<stdio.h>
#include<string.h>

int count_swaps(int a[], int n){
    int swap = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i+1; j < n; j++){
            if(a[j] < a[i]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                swap++;
            }
        }
    }
    return swap;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&arr[i]);
    }

    int res = count_swaps(arr,n);
    printf("%d",res);
}
