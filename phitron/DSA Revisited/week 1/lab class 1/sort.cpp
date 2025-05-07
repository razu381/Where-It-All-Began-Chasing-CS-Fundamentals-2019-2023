#include<bits/stdc++.h>
using namespace std;

void sort_num(int arr[], int n){
    sort(arr,arr + n);
}


int main(){
    int arr[5] = {21,24,33,4,5};
    sort_num(arr, 5);
    for(int i = 0; i < 5; i++) cout << arr[i] << " ";
}
