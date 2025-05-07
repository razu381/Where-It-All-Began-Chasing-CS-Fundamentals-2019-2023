#include<bits/stdc++.h>
#include "stack.h"
using namespace std;



int main(){
    string s;
    cin >> s;
    Stack <char> st;
    for(int i = 0; i < s.length(); i++){
        st.Push(s[i]);
    }
    string reversed;
    while(!st.Empty()){
        reversed += st.Pop();
    }

    if(s == reversed) cout << "Yes";
    else cout << "No";
}
