#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int size, int num, int lw, int high){
    int mid = (lw + high) / 2;
    if(lw <= high){
        if(num == arr[mid]) return mid;
        else if(num < arr[mid]) return search(arr,size,num,lw,mid-1);
        else return search(arr,size,num,mid+1,high);
    }
}


int main(){
    int arr[10] = {10,20,40,5,34,33,90,41,53,45};

    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr +size);
    int num;
    cin >> num;
    int res = search(arr,size,num,0,size-1);
    if(res != -1){
        cout << num << " found at index " << res;
    }else{
        cout << "Not Found";
    }
}
