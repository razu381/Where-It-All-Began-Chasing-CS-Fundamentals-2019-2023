#include<bits/stdc++.h>
using namespace std;

int calc_total(int num){
    if(num == 0) return 0;
    return calc_total(num - 1) + num;
}

int main(){
    cout << calc_total(5);
}

