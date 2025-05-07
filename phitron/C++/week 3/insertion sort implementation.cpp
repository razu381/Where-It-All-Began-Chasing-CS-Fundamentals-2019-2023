#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[6] = {5,1,3,8,2,2};
    int n = 6;

    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
