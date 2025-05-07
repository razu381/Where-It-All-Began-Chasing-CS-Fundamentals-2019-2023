#include <bits/stdc++.h>

using namespace std;


int main(void){
    int arr[] = {55,45,330,69,73,54};

    sort(arr,&arr[7]);
    for(int i = 1; i < 7; i++){
        cout << arr[i] << " ";
    }
}
