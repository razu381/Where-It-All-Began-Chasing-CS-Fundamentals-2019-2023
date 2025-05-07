#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int j = 0, count = 0;
    int arr[n] = {0};

    for(int i = 0; i < n; i++){
        while(i < n && s[i] == '+'){
            count++;
            i++;
        }
        arr[j] = count; j++; count = 0;

        while(i < n && s[i] == '-'){
            count++;
            i++;
        }
        arr[j] = count; j++; count = 0;
    }

    cout << *(max_element(arr,arr+n));

}
