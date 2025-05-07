#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    cin >> n;


    string ns = to_string(n);
    string ns2 = ns;
    reverse(ns2.begin(),ns2.end());
    if(ns == ns2) cout << "Yes";
    else cout << "No";
}
