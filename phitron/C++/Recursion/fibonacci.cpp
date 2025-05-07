#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n == 1) return 1;
    if(n == 2) return 1;

    int x = fib(n-1);
    int y = fib(n - 2);

    return x+y;
}

int main(){
    cout << fib(7);
}
