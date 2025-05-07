#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int idx){
    if(idx < 0) return 0;
    return sum(arr,idx-2) + arr[idx-1];
}




int main(){
    int arr[5] = {5,5,5,5,5};
    int idx = 5;
    cout << sum(arr,idx);
}
