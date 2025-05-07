#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    int space = n/2;
    for(int i = 1; i <= n; i += 2){
        for(int j = space; j > 0; j--) cout << " ";
        for(int k = 0; k < i; k++) cout << '*';
        cout << endl;
        space--;
    }

    space = 1;
    for(int i = n - 2; i >= 0; i -= 2){
        for(int j = 0; j < space; j++) cout << " ";
        for(int k = i; k > 0; k--) cout << "*";
        cout << endl;
        space++;

    }
}
