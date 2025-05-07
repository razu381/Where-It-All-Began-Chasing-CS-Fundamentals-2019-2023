#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,x,y;
    cin >> n >> k >> x >> y;
    int total_charge = 0;
    if(k >= n){
        total_charge = x * n;
    }else{
        int knf = x * k;
        int rn = n - k;
        int rnf = rn * y;
        int total_charge = knf + rnf;
    }


    cout << total_charge;
}
