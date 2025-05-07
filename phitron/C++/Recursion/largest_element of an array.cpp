#include<bits/stdc++.h>
using namespace std;

int largest_element(int arr[], int size){
    if(size == 0) return arr[0];
    int sec_max = largest_element(arr,size-1);
    return max(arr[size], sec_max);
}


int main(){
    int arr[] = {111,56755,7,888,345639};
    cout << largest_element(arr,4);
}
