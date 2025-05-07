#include<bits/stdc++.h>
using namespace std;

//int f(int n){
//    if(n == 1) return 1;
//
//    return f(n-1) * n;
//}


int f_loop(int n){
    int total = 1;
    for(int i = 1; i <= n; i++){
        total = total * i;
    }
    return total;
}


int main(){
    int n;
    cin >> n;
    cout << f_loop(n);
}

