#include<bits/stdc++.h>
using namespace std;


int bin_search(int arr[],int low, int up, int key){
    while(low <= up){
        int mid = (low + up) / 2;
        if(arr[mid] == key) return arr[mid];
        else if(arr[mid] < key) {
            low = mid + 1;
            bin_search(arr,low,up,key);
        }else if(arr[mid] > key){
            up = mid - 1;
            bin_search(arr,low,up,key);
        }
    }
    return -1;
}


int main(){
    int arr[] = {5,10,12,16,20,22};
    cout << bin_search(arr,0,5,16);
}
