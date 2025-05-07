#include<bits/stdc++.h>
using namespace std;


int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.length(); i++){
        int count = 0;
        for(int j = 0; j < s.length(); j++){
            if(s[i] == s[j]) count++;
            if(count > 1) {
                cout << "no";
                return 0;
            }
        }
    }
    cout << "yes";
}
