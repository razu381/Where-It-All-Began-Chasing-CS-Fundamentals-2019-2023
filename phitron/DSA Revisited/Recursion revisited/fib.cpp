#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n-1);
}

int fib_loop(int num){
    int total = 1;
    while(num >= 2){
        total += num;
        num--;
    }
    return total;
}


int main(){
    int num;
    cin >> num;

    cout << fib_loop(num);
}
