#include<bits/stdc++.h>
#include "stack.h"
using namespace std;


int main(){
    Stack <char> st;
    string s = "pqr.mno";
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '.'){
            st.Push(s[i]);
        }else{
            while(!st.Empty()){
                cout << st.Pop();
            }
            cout << '.';
        }
    }
    while(!st.Empty()){
            cout << st.Pop();
        }
}
