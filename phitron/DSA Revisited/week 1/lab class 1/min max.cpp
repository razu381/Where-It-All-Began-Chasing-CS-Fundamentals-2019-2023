#include<bits/stdc++.h>
using namespace std;

int find_min(int arr[],int n){
    int min_num = arr[0];
    for(int i = 1; i < n; i++){
        min_num = max (min_num,arr[i]);
    }
    return min_num;

}

int main(){
    int arr[5] = {21,24,33,34,225};

    cout << find_min(arr,5);
}
