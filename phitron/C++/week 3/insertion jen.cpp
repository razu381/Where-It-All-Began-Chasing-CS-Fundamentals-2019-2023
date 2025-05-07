#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6] = {1,2,4,5,6};
    int idx, val;
    cin >> idx >> val;

    for(int i = 6-1; i > idx ;i--){
        arr[i] = arr[i-1];
    }
    arr[idx] = val;

    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
}

