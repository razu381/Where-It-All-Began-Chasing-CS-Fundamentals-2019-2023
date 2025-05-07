#include<bits/stdc++.h>
using namespace std;


int search(int arr[],int size,int num, int low, int up){
    int mid = (low + up) / 2;

    if(low <= up){
        if(num == arr[mid]){
            return mid;
        }else if(num > arr[mid]){

            search(arr,size,num,mid+1,up);

        }else if(num < arr[mid]){
            search(arr,size,num,low,mid - 1);
        }

    }else{
        return -1;
    }
}



int main(){
    int arr[10] = {10,20,30,40,50,60,70,80,90,100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cin >> num;
    int res = search(arr,size,num,0,size-1);
    if(res != -1){
        cout << num << " found at index " << res;
    }else{
        cout << "Not Found";
    }
}

