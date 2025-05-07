#include<bits/stdc++.h>
using namespace std;

bool is_pallindrome(string s,int start,int end){
    if(start >= end) return true;
    if(s[start] != s[end]) return false;
    return is_pallindrome(s,start + 1, end - 1);
}

int main(){
    string s;
    cin >> s;
    if(is_pallindrome(s,0,s.length() - 1) == true) cout << "Pallindrome" << endl;
    else cout << "Not pallindrome" << endl;
}
