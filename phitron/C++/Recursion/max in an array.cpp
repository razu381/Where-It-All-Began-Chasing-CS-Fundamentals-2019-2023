#include<bits/stdc++.h>
using namespace std;

int find_max(int arr[],int sz,int max){

    if(sz < 0){
        return max;
    }

    if(arr[sz] > max ){
        max = arr[sz];
    }
    int final = find_max(arr,sz-1,max);
    return final;
}

int main(){
    int arr[] = {3,5,2,1,2,3,4,5,6,3,7,89,99,903};
    int sz = 13;
    cout << find_max(arr,sz,arr[0]);
}
