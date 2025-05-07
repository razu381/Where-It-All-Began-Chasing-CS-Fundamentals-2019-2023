#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int total = 0;

    int mid = n / 2 ;

    //count the first half of the array
    for(int j = 0; j < n; j++){
        if(j == mid){
            continue;
        }
        total += arr[mid][j];
    }
    //count the first half of the first row
    for(int j = 0; j < mid; j++){
        total += arr[0][j];
    }
    //count the last half of the last row
    for(int j = n-1; j > mid; j--){
        total += arr[n-1][j];
    }
    //count the first half of the array in column
    for(int j = 0; j < n; j++){
        total += arr[j][mid];
    }
    //count the first half of the first col
    for(int j = n-1; j > mid; j--){
        total += arr[j][0];
    }
    //count the first half of the last col
    for(int j = 0; j < mid; j++){
        total += arr[j][n-1];
    }

    cout << total;


}
