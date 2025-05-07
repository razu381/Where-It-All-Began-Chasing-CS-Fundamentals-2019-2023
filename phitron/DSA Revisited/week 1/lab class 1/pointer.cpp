#include<bits/stdc++.h>
using namespace std;

void change_a(int *a){
    *a = 50;
}

int main(){
    int a = 10;

    change_a(&a);
    cout << a;
}
