#include<bits/stdc++.h>
using namespace std;

void swap_me(int *a, int *b){
    *a = *b;
    *b = *a;
}

int main(){
    int a = 10, b = 5;

    swap(a,b);
    cout << a << " " << b;
}

