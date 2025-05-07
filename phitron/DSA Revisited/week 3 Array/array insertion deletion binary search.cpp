#include<bits/stdc++.h>
using namespace std;

void insert_at_specified(int arr[],int n, int pos, int val){

    for(int i = n - 1; i > pos; i--){
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
}

void delete_at_specified(int arr[],int n,int pos){
    for(int i = pos; i < n - 1; i++){
        arr[i] = arr[i+1];
    }
}

void bin_search(int arr[],int size,int num, int upper, int lower){
    while(lower >= upper){
        int mid = upper + lower / 2;
        if(arr[mid] == num) {
            cout << "Number found at index " << mid << endl;
            return;
        }
        else if(arr[mid] > num) bin_search(arr,size,num,mid-1,lower);
        else if(arr[mid] < num) bin_search(arr,size,num,upper,mid+1);
    }
    cout << "Number not found" << endl;
    return;

}

int main(){
    int n = 5;
    int arr[n] = {1,2,3,4,5};

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    bin_search(arr,n,55,n-1,0);

}
