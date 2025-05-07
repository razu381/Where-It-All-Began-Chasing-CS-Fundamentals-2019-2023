#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int size = n;

    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i == j) continue;
            else if( a[i] == a[j]){
                size--;
                for(int k = j; k < size; k++){
                    a[k] = a[k+1];
                }
            }
        }
    }


    for(int i = 0; i < size; i++) cout << a[i] << " ";
}
