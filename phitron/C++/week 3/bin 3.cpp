#include<bits/stdc++.h>
using namespace std;


int search(int arr[],int size, int num, int low, int up){
    int mid = (up + low) / 2;

    if(low <= up){
        if(num == arr[mid]) return mid;
        else if(num > arr[mid]) search(arr,size,num,mid+1,up);
        else search(arr,size,num,low,mid-1);
    }
}

int main(){
    int arr[10] = {5,10,15,40,50,60,70,90,99,100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cin >> num;

    int res = search(arr,size,num,0,size-1);

    if(res != -1){
        cout << num << " found at position " << res;
    }else{
        cout << "Number not found, Thank you";
    }
}
