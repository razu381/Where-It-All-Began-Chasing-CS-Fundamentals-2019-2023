#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;

    for(int j = 0; j < t; j++){

        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr+n);

        int count = 0;
        int idx = 0;
        while(arr[idx] == arr[0]){
            count++;
            idx++;
        }



        cout << n - count<< endl;
    }


}
