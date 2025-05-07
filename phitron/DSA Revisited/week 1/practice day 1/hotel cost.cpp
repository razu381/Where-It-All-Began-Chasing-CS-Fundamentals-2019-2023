#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k,x,y;
    cin >> n >> k >> x >> y;
    int remaining_days = n - k;

    if(n < k) cout << n * x << endl;
    else cout << k * x + remaining_days * y;
}
