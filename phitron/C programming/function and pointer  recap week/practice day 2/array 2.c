#include<stdio.h>
//#include<string.h>

void rev_numbers(int n, int arr[]){
    for(int i = 0, j = n - 1; i < n / 2;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main(){
    int numbers[] = {1,2,3,4,5};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    //printf("%d \n",size);
    rev_numbers(size,numbers);
    for(int i = 0; i < size;i++){
        printf("%d ",numbers[i]);
    }
}
