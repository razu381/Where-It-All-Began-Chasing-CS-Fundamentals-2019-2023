#include<bits/stdc++.h>
using namespace std;


int main(){
    int n = 10;
    int arr[n] = {1,2,3,4,5,6,7,8,9,10};

    int inner_loop_count = 0;
    bool inorder = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1-i; j++){
            inner_loop_count++;
            if(arr[j] > arr[j+1]){
                inorder = false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(inorder == true) break;
    }


    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    cout << inner_loop_count;
}
