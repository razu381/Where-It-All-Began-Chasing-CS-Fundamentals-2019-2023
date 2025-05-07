#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    if( a * b >= d * c) cout << a * b;
    else if(c * d >= a * b) cout << c * d;
}
