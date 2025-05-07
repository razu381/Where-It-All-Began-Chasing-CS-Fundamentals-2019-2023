#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int size, int num, int up, int lw){
    int mid = (lw + up) / 2;
    if(lw <= up){
        if(num == arr[mid]){
            return mid;
        }else if(num < arr[mid]){
            search(arr,size,num,mid-1,lw);
        }else if(num > arr[mid]){
            search(arr,size,num,up,mid+1);
        }
    }else{
        return -1;
    }
}



int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cout << "Enter the number to search: ";
    cin >> num;
    int res = search(arr,size,num,size-1,0);
    cout << res;
}
