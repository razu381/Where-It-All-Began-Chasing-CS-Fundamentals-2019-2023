#include<bits/stdc++.h>
using namespace std;

int cal_num(int n){
    if(n == 0) return 0;
    int x = cal_num(n-1);
    return x + n;
}

int main(){
    cout << cal_num(50);
}


