#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[50] = {1,2,3,4,5};
    int arr_size;
    cout << "Enter the size of array: ";
    cin >> arr_size;
    cout << "original Array \n";
    //print the array
    for(int i = 0; i < 5; i++){

        cout << arr[i] << " ";
    }
    cout << endl;

    //insert
    int pos,val;
    cout << "Enter position & value: ";
    cin >> pos >> val;

//    for(int i = arr_size; i < pos - 1; i--){
//        arr[i] = arr[i - 1];
//    }
//    arr[pos-1] = val;

    arr[arr_size]= arr[pos];
    arr[pos] = val;

    //print the array
    cout << "after insertion \n";
    for(int i = 0; i < 6; i++){

        cout << arr[i] << " ";
    }

}
