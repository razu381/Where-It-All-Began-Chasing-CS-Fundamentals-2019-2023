#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    n++;

    int arr[n];

    //get input for array
    for(int i = 0; i < n-1; i++){
        cin >> arr[i];
    }

    //modify the array
    int idx, val;
    cin >> idx >> val;

    for(int i = n - 1; i > idx; i--){
        arr[i] = arr[i-1];
    }
    arr[idx] = val;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
