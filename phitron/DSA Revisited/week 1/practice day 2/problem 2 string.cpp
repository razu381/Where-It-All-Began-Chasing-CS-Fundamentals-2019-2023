#include<bits/stdc++.h>
using namespace std;



int main(){
    string s;
    cin >> s;
    string new_str = "";

    for(int i = 0; i < s.length(); i += 2){
        new_str += s[i];
    }

    cout << new_str;
}
