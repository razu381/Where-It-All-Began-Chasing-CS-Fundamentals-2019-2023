#include<bits/stdc++.h>
using namespace std;


int bubble_sort(int arr[],int size){
    for(int i = 1; i < size; i++){
        int is_sorted = 0;
        for(int j = 0; j < size - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                is_sorted = 1;
            }
        }
        if(is_sorted == 0) break;
    }
}

int main(){
    int arr[10] = {100,5,10,50,6,100,121,145,253,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}
