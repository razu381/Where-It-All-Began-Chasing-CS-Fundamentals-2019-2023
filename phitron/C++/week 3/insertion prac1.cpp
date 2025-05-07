#include<bits/stdc++.h>
using namespace std;



int main(){
    int a[5] = {5,3,4,1,2};
    int n = 5;

    for(int i = 1; i < n; i++){
        int temp = a[i];
        int j = i - 1;

        while(j >= 0 && a[j] > temp){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << "\n";
    }
}
