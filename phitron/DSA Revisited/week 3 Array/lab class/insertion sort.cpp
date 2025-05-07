#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 5;
    int arr[n] = {2,4,1,3,7};

    for(int i = 1; i < n - 1; i++){
        int j = i - 1;
        int k = arr[i];

        while(j >= 0 && k < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
    }

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}
