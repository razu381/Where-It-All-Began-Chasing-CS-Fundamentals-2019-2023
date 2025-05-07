#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[],int size){
    for(int i  = 0; i < size; i++){
        cout << arr[i] << " ";
    }
}


int main(){
    int arr[] = {7,2,9,2,7,4,5,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    //frequency array
    int max_num = *max_element(arr,arr+size);
    int freq[max_num+1] = {0};
    for(int i = 0; i < size ;i++){
        freq[arr[i]]++;
    }
    cout << "Frequency array = " ;
    print_array(freq,max_num+1);
    cout << endl;
    //comulitive sum
    for(int i = 1; i < max_num+1 ;i++){
        freq[i] = freq[i] + freq[i-1];
    }
    cout << "Coumulitive sum : ";
    print_array(freq,max_num+1);
    cout << endl;

    //New output array
    int output[size];
    for(int i = size - 1; i >= 0 ; i--){
        freq[arr[i]]--;
        output[freq[arr[i]]] = arr[i];
    }

    cout << "sorted array : ";
    print_array(output,size);
    cout << endl;



}
