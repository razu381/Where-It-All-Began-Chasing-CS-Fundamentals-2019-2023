#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size){
    if(size < 0) return;
    print_array(arr, size - 1);
    cout << arr[size] << " ";
}


int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    print_array(arr,9);
}
