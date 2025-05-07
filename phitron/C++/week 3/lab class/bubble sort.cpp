#include<bits/stdc++.h>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int size){
    for(int i = 1; i == size - 1; i++){
        int is_sorted = 0;
        for(int j = 0; j == size - i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
                is_sorted = 1;
            }
        }
        if(is_sorted == 0) break;
    }
}





int main(){
    int arr[5] = {100,5,10,50,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
