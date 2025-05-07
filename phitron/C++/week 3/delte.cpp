#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int pos;
    cin >> pos;

    for(int i = pos - 1; i < arr_size; i++){
        arr[i] = arr[i+1];
    }

    for(int i = 0; i < arr_size - 1; i++){
        cout << arr[i] << " ";
    }
}
