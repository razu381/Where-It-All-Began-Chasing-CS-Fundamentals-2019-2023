#include<bits/stdc++.h>
using namespace std;

void reverse_arr(char arr[], int start, int end){
    if(start >= end) return;
    swap(arr[start],arr[end]);
    reverse_arr(arr,start +1, end - 1);
}

int main(){
    char arr[] = {'a','b','c','d','e','f','g','h','i','j'};
    reverse_arr(arr,0,9);
    for(int i = 0; i < 10; i++) cout << arr[i] << " ";
}
