#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;

    int n = s.length() / 2 + 1;
    int arr[n];
    int idx = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1' || s[i] == '2' || s[i] == '3'){
            arr[idx] = s[i] - '0';
            idx++;
        }
    }
    sort(arr, arr+n);

    for(int i = 0; i < n; i++){
        cout << arr[i];
        if(i != n-1) cout << '+';
    }

}
