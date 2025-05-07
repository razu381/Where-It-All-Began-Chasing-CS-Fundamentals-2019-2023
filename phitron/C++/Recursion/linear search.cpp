
#include<bits/stdc++.h>
using namespace std;

void Search(int arr[],int idx,int num){
    if(arr[idx] == num) {
        cout << "NUmber found" << endl;
        return;
    }
    if(idx < 0){
        cout << "Number is not present in this array" << endl;
        return;
    }

    Search(arr,idx-1,num);
}




int main(){
    int arr[5] = {1,2,3,4,5};
    int idx = 4;
    int num = 2;
    Search(arr,idx,num);
}
