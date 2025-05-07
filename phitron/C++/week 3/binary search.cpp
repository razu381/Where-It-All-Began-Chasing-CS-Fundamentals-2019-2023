#include<bits/stdc++.h>
using namespace std;



int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int num;
    cin >> num;

    int up = size - 1, low = 0;

    while(low <= up){
        int mid = low + up / 2;

        if(num == arr[mid]){
            cout << mid;
        }else if(num > arr[mid]){
            low = mid + 1;

        }else if(num < arr[mid]){
            up = mid - 1;
        }
    }
}
