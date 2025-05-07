#include<bits/stdc++.h>
using namespace std;



int main(){
    int x, t;
    cin >> x >> t;

    int remaining = x - t;
    if(remaining <= 0) cout << 0;
    else cout << remaining;
}
