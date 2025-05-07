#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c;
    cin >> a >> b >> c;


    if (b+c == a) cout << "Yes";
    else if (c + a == b) cout << "Yes";
    else if (a + b == c) cout << "Yes";
    else cout << "No";
}
