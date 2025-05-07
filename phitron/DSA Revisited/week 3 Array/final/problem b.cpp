#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        int arr[n];

        int total = 0;
        for(int i = 0; i < n; i++){
            int num;
            cin >> num;
            arr[i] = num;
            total += num;
        }
        int avg = total / n;

        int count = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] > avg) count++;
        }
        cout << count << endl;
    }



}
