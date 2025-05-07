#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];

    //get input from the user
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    //find max
    int max = *(max_element(arr,arr+n));

    //frequency array
    int freq[max+1] = {0};
    for(int i = 0; i < n; i++){
        int pos = arr[i];
        freq[pos]++;
    }


    for(int i = 1; i < max+1; i++){
        if(freq[i] != 0){
            cout << i << " => "<< freq[i] << endl;
        }

    }


}
