#include<bits/stdc++.h>
using namespace std;



int main(){
    int arr[5] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int prefix[n];

    prefix[0] = arr[0];
    for(int i = 0; i < n; i++){
        prefix[i] = arr[i] + prefix[i-1];
    }

    for(int i = 0; i < n; i++){
        cout << prefix[i] << " ";
    }
    cout << endl;

    int num = prefix[3] - prefix[0];

    cout << num;
}
