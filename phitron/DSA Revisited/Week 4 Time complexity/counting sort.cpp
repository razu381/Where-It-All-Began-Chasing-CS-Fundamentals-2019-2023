#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0;i < n; i++) cin >> arr[i];
    //for(int i = 0;i < n; i++) cout  << arr[i] << " ";
    //cout << endl;

    int max_num = *(max_element(arr,arr+n));
    int frequency[max_num + 1] = {0};

    for(int i = 0; i < n; i++){
        frequency[arr[i]]++;
    }

    for(int i = 1; i < max_num+1; i++){
        frequency[i] += frequency[i-1];
    }
    cout << "Maximum number = " << max_num << endl;

    int output[n] = {0};
    for(int i = 0; i < n; i++){
         frequency[arr[i]]--;
        int k = frequency[arr[i]];
        output[k] = arr[i];

    }

    for(int i = 0; i < n; i++) cout << output[i] << " ";
}
