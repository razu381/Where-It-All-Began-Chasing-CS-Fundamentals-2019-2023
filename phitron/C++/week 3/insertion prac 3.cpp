#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 20;
    int arr[n] = {9,8,6,7,4,5,1,2,3,10,15,12,13,14,11,16,18,17,19,20};

    for(int i = 1; i < n ;i++){
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }


    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
