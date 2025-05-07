#include<bits/stdc++.h>
using namespace std;




int main(){
    int n = 17 ;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    //FIND THE MAXIMUM ELEMENT
    int max = *max_element(arr,arr+n);

    //FREQUENCY ARRAY
    int freq[max+1] = {0};
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }

    //CUMULITIVE SUM
    for(int i = 1;i < max+1; i++){
        freq[i] += freq[i-1];
    }

    //SORTED ARRAY
    int sorted[n] = {0};
    for(int i = n-1; i >= 0; i--){
        freq[arr[i]]--;
        int pos = freq[arr[i]];
        sorted[pos] = arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << sorted[i] << " ";
    }

}
