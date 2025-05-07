#include<bits/stdc++.h>
using namespace std;

void print_num(int n){
    if(n < 1) return;
    print_num(n-1);
    cout << n << endl;
}

int main(){
    print_num(50);
}

