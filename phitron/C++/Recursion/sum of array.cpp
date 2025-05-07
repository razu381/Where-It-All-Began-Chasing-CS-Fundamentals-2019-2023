#include<bits/stdc++.h>
using namespace std;

int array_sum(int arr[], int size){
    if(size < 0) return 0;
    int x = array_sum(arr,size - 1);
    return x + arr[size];
}


int main(){
    int arr[] = {5,10,15,30,40};
    cout << array_sum(arr,4);
}
