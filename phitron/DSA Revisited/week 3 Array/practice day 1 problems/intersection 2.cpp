#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int m;
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++) cin >> b[i];


    int *intersec = new int;

    int size = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]){
                intersec[size] = a[i];
                size++;
            }
        }
    }


    if(size == 0){
        cout << "No set" << endl;
    }else{
        for(int i = 0; i < size; i++) cout << intersec[i] << " ";
    }
    cout << endl;

}
