#include<bits/stdc++.h>
using namespace std;



int main(){
    int arr[11] = {1,2,3,4,5,6,7,8,9,10};
    int arr_size = 10;
    int idx, val;
    cout << "Enter index and value: ";
    cin >> idx >> val;

//    //insert array
//    if(idx > arr_size){
//        cout << "invalid index";
//    }
//    else
//    {
//        for(int i = arr_size; i > idx; i--){
//        arr[i] = arr[i-1];
//        }
//        arr[idx] = val;
//    }

    //delte item from array

    if(idx == arr_size - 1){
        arr_size --;
    }else if(idx >= arr_size){
        cout << "Index is out of range \n";
        return 0;
    }else{
        for(int i = idx; i < arr_size - 1; i++){
            arr[i] = arr[i+1];
        }
        arr_size --;
    }


    for(int i = 0; i < arr_size; i++){
        cout << arr[i] << " ";
    }
}
