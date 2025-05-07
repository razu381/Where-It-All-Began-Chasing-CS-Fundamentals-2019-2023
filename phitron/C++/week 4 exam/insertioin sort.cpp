#include<bits/stdc++.h>
using namespace std;

void print_arr(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[] = {5,1,3,8,2,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i < size ;i++){
        int j = i - 1;
        int temp = arr[i];

        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;


        }
        arr[j+1] = temp;
        print_arr(arr,size);
            cout << endl;
    }

    print_arr(arr,size);
}
