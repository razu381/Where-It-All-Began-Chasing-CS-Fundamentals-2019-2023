#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;

    int len = s.length();
    cout << s[0] << len - 2 << s[ len - 1 ];
}
