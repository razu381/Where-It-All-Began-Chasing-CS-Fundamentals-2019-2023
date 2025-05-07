#include<bits/stdc++.h>
using namespace std;

int bin_search(int num,int arr[], int size,int up, int lw){

    if(lw <= up){
        int mid = (up + lw) / 2;
        cout << "Mid = " << mid << endl;
        if(arr[mid] == num){
            cout << "Number found at" << mid << endl;
            return  mid;
        }else if(num > arr[mid]){
            cout << "Number is greater than mid, now upper bound = " << up << " and lower bound = " << mid+1 << endl;
            bin_search(num,arr,size,up,mid+1);
        }
        else{
            cout << "Number is less than mid, now upper bound = " << mid-1 << " and lower bound = " << lw << endl;
            bin_search(num,arr,size,mid-1,lw);
        }
    }else{
        cout << "Number was not found, Thanks";
        return -1;

    }
}

int main(){
    int arr[] = {1,2,9,11,17,24,26,31,32,45};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num;
    cin >> num;

    int re = bin_search(num,arr,size,size - 1,0);

    //cout << re;
}
